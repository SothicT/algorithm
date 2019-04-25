/*--------------------- 
作者：dongfanglanyi 
来源：CSDN 
原文：https://blog.csdn.net/dongfanglanyi/article/details/82355982 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
 
int main(int argc, char *argv[])
{
    string str = "hello world!";
    char *buff;
    const char * cstr = str.data();
    const char *cstr2 = str.c_str();
    //string::npos是机器上最大的正整数，常用来表示string的结束位置
    size_t length = str.copy(buff,string::npos,0);
    buff[length] = '\0';
 
    for(int i =0; str[i]!='\0'; i++)
        cout << str[i];
    cout <<"data():" << cstr << endl;
    cout << "c_str():" << cstr2 << endl;
    cout << "copy():" << buff << endl;
    str = "chinese";
    cout <<"data():" << cstr << endl;
    cout << "c_str():" << cstr2 << endl;
    cout << "copy():" << buff << endl;
    return 0;
}


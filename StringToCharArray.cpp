/*--------------------- 
���ߣ�dongfanglanyi 
��Դ��CSDN 
ԭ�ģ�https://blog.csdn.net/dongfanglanyi/article/details/82355982 
��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�
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
    //string::npos�ǻ�������������������������ʾstring�Ľ���λ��
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


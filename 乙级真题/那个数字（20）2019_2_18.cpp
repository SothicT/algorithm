/*
题目描述
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
输入描述:
每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。
输出描述:
在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。
*/
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(void)
{
	string str = "";
	int i=0,sum=0;
	cin>>str;
	while(i<str.size())
	{
		sum += str[i] - '0';//强制类型转换 
		i++;
	}
	string num[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char result[10] = {0};
	sprintf(result,"%d",sum);//将sum以单个字符形式存入result数组中 
	cout<<num[result[0]-'0'];
	for(int i=1;result[i]!= '\0';i++)//判断result数据不为零 
	{
		cout<<" "<<num[result[i]-'0'];
	}
	return 0;
}
 

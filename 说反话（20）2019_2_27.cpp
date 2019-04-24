/*
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：
测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。
字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）
组成的字符串，单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。

输出格式：
每个测试用例的输出占一行，输出倒序后的句子。
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	string str[81];
	int i=0;
	do
	{
		cin>>str[i];
		i++;
	}
	while(getchar()!='\n');
	for(i=i-1;i>0;i--)
	{
		cout<<str[i]<<" ";
	}
	cout<<str[0];
	return 0;
}

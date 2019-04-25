/*
让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零
的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。例如 234
应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
	int bnum,snum,num;
	int n;
	cin>>n;
	bnum = (int)n/100;
	snum = (int)(n-bnum*100)/10;
	num = n-bnum*100-snum*10;
	for(int i =0;i<bnum;i++)
	{
		cout<<"B";
	}
	for(int i =0;i<snum;i++)
	{
		cout<<"S";
	}
	for(int i = 1;i<=num;i++)
	{
		cout<<i;
	}
	return 0;	
} 

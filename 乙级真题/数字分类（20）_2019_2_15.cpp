
/*
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。

输入描述:
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。


输出描述:
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
若其中某一类数字不存在，则在相应位置输出“N”。
*/
#include <stdio.h>
#include <iostream>
#define N 1000
using namespace std;
int main(void)
{
	int A1=0;
	int A2=0;
	int A3=0;
	int	A4_sum=0;
	int A5=0;
	double A4=0.0;
	int counts[5]={0};
	int n,temp,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		if(temp % 5 == 0 && temp % 2 ==0)
		{
			counts[0] += 1;
			A1 += temp;
		}
		else if(temp % 5 == 1)
		{
			if(counts[1] % 2 == 0)
				A2 += temp;
			else
				A2 -= temp;
			counts[1]++;
		}
		else if(temp % 5 == 2)
		{
			counts[2]++;
			A3 = counts[2];
		}
		else if(temp % 5 == 3)
		{
			counts[3]++;
			A4_sum += temp;
		}
		else if(temp % 5 == 4)
		{
			if(temp > A5)
				A5 = temp;
			counts[4]++;
		}
	}
	if(counts[0] == 0)
		cout<<"N"<<" ";
	else
		cout<<A1<<" ";
	if(counts[1] == 0)
		cout<<"N"<<" ";
	else 
		cout<<A2<<" ";
	if(counts[2] == 0)
		cout<<"N"<<" ";
	else
		cout<<A3<<" ";
	if(counts[3] == 0)
		cout<<"N"<<" ";
	else{
		A4 = (double)A4_sum/counts[3];
		printf("%.1f ",A4);
	}
	
	if(counts[4] == 0)
		cout<<"N"<<" ";
	else
		cout<<A5<<" ";
	return 0;
}
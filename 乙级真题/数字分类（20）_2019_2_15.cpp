
/*
����һϵ�����������밴Ҫ������ֽ��з��࣬���������5�����֣�

A1 = �ܱ�5����������������ż���ĺͣ�
A2 = ����5������1�����ְ�����˳����н�����ͣ�������n1-n2+n3-n4...��
A3 = ��5������2�����ֵĸ�����
A4 = ��5������3�����ֵ�ƽ��������ȷ��С�����1λ��
A5 = ��5������4��������������֡�

��������:
ÿ���������1������������ÿ�����������ȸ���һ��������1000��������N��������N��������1000�Ĵ�����������������ּ��Կո�ָ���


�������:
�Ը�����N��������������ĿҪ�����A1~A5����һ����˳����������ּ��Կո�ָ�������ĩ�����ж���ո�
������ĳһ�����ֲ����ڣ�������Ӧλ�������N����
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
/*
�����Ƕ���dn
Ϊ��dn =pn+1 - pn������pi�ǵ�i����������Ȼ��d1 = 1���Ҷ���n>1��dn��ż����
�������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������
�ָ�������������N(<100000)������㲻����N���������������Եĸ�����
�����ʽ:
������һ�и���������N��
�����ʽ:
��һ�������������N���������������Եĸ�����
*/
#include <stdio.h>
#include <iostream>
using namespace std;
bool isprime(int num)
{
	for(int i=2;i<=num/i;i++)
	{
		if(num%i==0)
			return false;
	}
	return true;
}
int main(void)
{
	int n,temp,flag=0,count=0;
	cin>>n;
	int prime[n];
	for(int i=2;i<n;i++)
	{
		if(isprime(i))
		{
			prime[count]=i;
			count++;
		}
	}
	for(int i=1;i<count;i++)
	{
		temp = prime[i]-prime[i-1];
		if(temp==2)
			flag++;
	}
	cout<<flag;
	return 0;
}

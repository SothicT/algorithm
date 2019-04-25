/*
让我们定义dn
为：dn =pn+1 - pn，其中pi是第i个素数。显然有d1 = 1，且对于n>1有dn是偶数。
“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
现给定任意正整数N(<100000)，请计算不超过N的满足猜想的素数对的个数。
输入格式:
输入在一行给出正整数N。
输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。
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

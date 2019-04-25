/*
一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循
环向右移M（≥0）个位置，即将A中的数据由（A0A1AN-1）变换为（AN-MAN-1A0A1
AN-M-1）（最后M个数循环移至最前面的M个位置）。如果需要考虑程序移动数据的
次数尽量少，要如何设计移动的方法？
输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；
第2行输入N个整数，之间用空格分隔。
输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，
序列结尾不能有多余空格。
*/
#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int a[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
int main(void)
{
	int n,m;
	cin>>n>>m;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int count=m%n;
	swap(num,0,n-1);
	swap(num,0,count-1);
	swap(num,count,n-1);
	for(int i=0;i<n-1;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<num[n-1];
}

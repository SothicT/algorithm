/*
һ������A�д���N��>0�����������ڲ�����ʹ�����������ǰ���£���ÿ������ѭ
��������M����0����λ�ã�����A�е������ɣ�A0A1AN-1���任Ϊ��AN-MAN-1A0A1
AN-M-1�������M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵ�
���������٣�Ҫ�������ƶ��ķ�����
�����ʽ:
ÿ���������һ��������������1������N��1��N��100����M����0����
��2������N��������֮���ÿո�ָ���
�����ʽ:
��һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ���
���н�β�����ж���ո�
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

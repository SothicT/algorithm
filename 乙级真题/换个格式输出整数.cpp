/*
����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��
�ĸ�λ���� n��<10����������ʽ�������һ�������� 3 λ�������������� 234
Ӧ�ñ����Ϊ BBSSS1234����Ϊ���� 2 �����١���3 ����ʮ�����Լ���λ�� 4��
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

/*
	��Ŀ���ƣ���3N+1���룩 
*/
#include <stdio.h>
#include <iostream>
using namespace std;
#define N 100
 int main(void)
 {
 	int count=0,n=0;
 	//int (*temp)[N]; ����ָ�룺�������һ������ΪN�������ָ��
	int temp[N] = {0};
	int *tempptr = temp;  //ָ�����飬��ʾָ�������һ��Ԫ�ص�ַ��ָ�� 
 	cin>>n;
 	while(n != 1)
 	{
 		if(n % 2 == 1)
		{
			n = (3*n + 1) / 2;	
		}
		else
		{
			n = n / 2;
		}
		*tempptr = n;
		tempptr++;
		temp[count] = n;
		count++;	
	}
	cout<<count<<endl;
	for(int i = 0;i < count; i++)
	{
		cout<<temp[i];
	}
	return 0;
 }

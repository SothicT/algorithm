/*
	题目名称：（3N+1猜想） 
*/
#include <stdio.h>
#include <iostream>
using namespace std;
#define N 100
 int main(void)
 {
 	int count=0,n=0;
 	//int (*temp)[N]; 数组指针：代表的是一个长度为N的数组的指针
	int temp[N] = {0};
	int *tempptr = temp;  //指针数组，表示指向数组第一个元素地址的指针 
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

/*
��Ŀ����
��������[-2��31�η�, 2��31�η�]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

��������:
�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�������:
��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����
*/
#include <iostream>
using namespace std;
#define T 10
int main(void){
	int n;
	cin>>n;
	long A[T];
	long B[T];
	long C[T];
	int i;
	for(i=0;i<n;i++){
		cin>>A[i]>>B[i]>>C[i];
	}
	for (i=0;i<n;i++){
		if(A[i] > C[i] - B[i])
			cout<<"Case #"<<i+1<<": true"<<endl;
		else
			cout<<"Case #"<<i+1<<": false"<<endl;
	}
	return 0;
}
/*
����Ҫ�����A/B������A�ǲ�����1000λ����������B��1λ��������
����Ҫ�������Q������R,ʹ��A=B*Q+R������
�����ʽ��
������һ�������θ���A��B���м���1�ո�ָ���
�����ʽ��
��һ�����������Q��R���м���1�ո�ָ���
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void){
	int b,temp=0,r=0;
	string a,q;
	cin>>a>>b;
	if(a.size()==1&&(a[0]-'0'<b)){
		cout<<"0 "<<a;
	}
	if(b == 0){
		cout<<a<<" 0";
		return 0;
	}
	temp = a[0]-'0';
	if((a[0]-'0')>b){
		q.push_back((temp/b)+'0');
	}	
	for(unsigned int i=1;i<a.size();i++){
		r = temp%b;
		temp = r*10+(a[i]-'0'); 
		q.push_back((temp/b)+'0');
//		cout<<r<<" "<<q<<endl;
	}
//	cout<<temp;
	r = temp%b;
	cout<<q<<" "<<r;
	return 0;
}

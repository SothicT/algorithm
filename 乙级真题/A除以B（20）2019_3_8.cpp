/*
本题要求计算A/B，其中A是不超过1000位的正整数，B是1位正整数。
你需要输出商数Q和余数R,使得A=B*Q+R成立。
输入格式：
输入在一行中依次给出A和B，中间以1空格分隔。
输出格式：
在一行中依次输出Q和R，中间以1空格分隔。
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

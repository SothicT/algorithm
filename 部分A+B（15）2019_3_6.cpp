/*
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。
例如：给定A=3862767，D=6，则A的“6部分”PA是66，因为A中有2个6。
现给定A、DA、B、D，请编写程序计算PA+PB。
输入格式：
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0<A,B<10^10。
输出格式：
在一行中输出PA+PB的值。
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void){
	string A,B;
	int Da,Db,pa=0,pb=0;
	cin>>A>>Da>>B>>Db;
	for(unsigned long i=0;i<A.size();i++){
		if(A[i] == (char)('0'+Da)){ 
			pa = pa*10 + Da;
		} 
	}
	for(unsigned long j=0;j<B.size();j++){
		if(B[j] == (char)('0'+Db))
			pb = pb*10 + Db;
	}
	cout<<(pa+pb);
	return 0;
}

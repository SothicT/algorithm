/*
������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA��
���磺����A=3862767��D=6����A�ġ�6���֡�PA��66����ΪA����2��6��
�ָ���A��DA��B��D�����д�������PA+PB��
�����ʽ��
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0<A,B<10^10��
�����ʽ��
��һ�������PA+PB��ֵ��
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

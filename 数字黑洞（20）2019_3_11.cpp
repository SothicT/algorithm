/*
������һ����λ���ֲ���ȫ��ͬ�� 4 λ����������������Ȱ� 4 �����ְ��ǵ�
�������ٰ��ǵݼ�����Ȼ���õ� 1 �����ּ��� 2 �����֣����õ�һ���µ�
���֡�һֱ�ظ������������Ǻܿ��ͣ���С����ֺڶ���֮�Ƶ� 6174���������
������Ҳ�� Kaprekar ������
���磬���Ǵ�6767��ʼ�����õ�
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...
�ָ������� 4 λ�����������д������ʾ����ڶ��Ĺ��̡�
�����ʽ��
�������һ�� (0,10^4)�����ڵ������� str��
�����ʽ��
��� N �� 4 λ����ȫ��ȣ�����һ������� N - N = 0000�����򽫼����ÿ
һ����һ���������ֱ�� 6174 ��Ϊ����֣������ʽ��������ע��ÿ�����ְ�
 4 λ����ʽ�����
*/
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
using namespace std;
bool comp1(char a,char b){ 		//�Ӵ�С���� 
	return (a-'0')>(b-'0');
}
bool comp2(char a,char b){		//��С�������� 
	return (a-'0')<(b-'0'); 
}
string int2string(int val){		 
	stringstream ss;
	ss<<val;
	cout<<ss.str()<<endl;
	return ss.str();
}
int string2int(string a){
	int result;
	for(int i=0;i<a.size();i++){
		result = result + (pow(10,i)*(a[a.size()-i-1]-'0'));
	}
	return result;
}
int main(void){
	string num;
	char n[4];
	int val=0,temp=0;
	cin>>num;
	if(num.size()<4){		//��������stringС����λ�� 
		num.append(4-num.size(),'0');
	}
	while(true){
		if((num[0]==num[1])&&(num[1]==num[2])&&(num[2]==num[3])){
			//����ַ���4λ���ֶ���� 
			cout<<num<<" - "<<num<<" = "<<"0000";
			break; 
		}
		else{	//����ַ������ֶ������
			for(int i=0;i<4;i++){
				val[i]=num[i];
			}
			sort(n,n+4,comp2);
			
		}
	}
	return 0;
} 

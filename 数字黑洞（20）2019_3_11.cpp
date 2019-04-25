/*
给定任一个各位数字不完全相同的 4 位正整数，如果我们先把 4 个数字按非递
增排序，再按非递减排序，然后用第 1 个数字减第 2 个数字，将得到一个新的
数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的 6174，这个神奇
的数字也叫 Kaprekar 常数。
例如，我们从6767开始，将得到
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...
现给定任意 4 位正整数，请编写程序演示到达黑洞的过程。
输入格式：
输入给出一个 (0,10^4)区间内的正整数 str。
输出格式：
如果 N 的 4 位数字全相等，则在一行内输出 N - N = 0000；否则将计算的每
一步在一行内输出，直到 6174 作为差出现，输出格式见样例。注意每个数字按
 4 位数格式输出。
*/
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
using namespace std;
bool comp1(char a,char b){ 		//从大到小排序 
	return (a-'0')>(b-'0');
}
bool comp2(char a,char b){		//从小到大排序 
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
	if(num.size()<4){		//如果输入的string小于四位数 
		num.append(4-num.size(),'0');
	}
	while(true){
		if((num[0]==num[1])&&(num[1]==num[2])&&(num[2]==num[3])){
			//如果字符串4位数字都相等 
			cout<<num<<" - "<<num<<" = "<<"0000";
			break; 
		}
		else{	//如果字符串数字都不相等
			for(int i=0;i<4;i++){
				val[i]=num[i];
			}
			sort(n,n+4,comp2);
			
		}
	}
	return 0;
} 

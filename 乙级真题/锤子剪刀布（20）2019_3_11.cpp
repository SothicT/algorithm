/*
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示:
FigCJB.jpg
现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么
手势的胜算最大。
输入格式：
输入第 1 行给出正整数 N（≤10^5），即双方交锋的次数。随后 N 行，
每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C 代表“锤子”、
J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，
中间有 1 个空格。

输出格式：
输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。
第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格
。如果解不唯一，则输出按字母序最小的解。
*/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int judge(char a,char b){
//	cout<<a<<b<<endl;
	if(a!=b){
		if((a=='J'&&b=='B')||(a=='B'&&b=='C')||(a=='C'&&b=='J')) 
			return 2;  //胜 
		else
			return 1;	//负 
	}
	else
		return 0;		//平 
}
void comp(int j,int c,int b){
//	cout<<j<<" "<<c<<" "<<b<<endl; 
	if((b==j&&j==c)||(b>=j&&b>=c))
		cout<<"B";
	else if((j>c&&c>=b)||(j>b&&b>=c))
		cout<<"J";
	else if((c>=j&&j>=b))
		cout<<"C";
}
int main(void){
	int n,s=0,p=0,f=0;
	int count_ac=0,count_aj=0,count_ab=0;
	int count_bc=0,count_bj=0,count_bb=0;
	cin>>n;
	char a[n],b[n];
	for(int i =0 ;i<n; i++){
		cin>>a[i]>>b[i];
		if(judge(a[i],b[i])==2){
			s++;
			if(a[i]=='C')
				count_ac++;
			else if(a[i]=='J')
				count_aj++;
			else if(a[i]=='B')
				count_ab++;
		}
		else if(judge(a[i],b[i])==1){
			f++;
			if(b[i]=='C')
				count_bc++;
			else if(b[i]=='J')
				count_bj++;
			else if(b[i]=='B')
				count_bb++;
		}
		else if(judge(a[i],b[i])==0){
			p++;
		}
	}
	cout<<s<<" "<<p<<" "<<f<<endl;
	cout<<f<<" "<<p<<" "<<s<<endl;
	comp(count_aj,count_ac,count_ab);
	cout<<" ";
	comp(count_bj,count_bc,count_bb);
	return 0;
}

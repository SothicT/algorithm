/*
���Ӧ�ö����桰���Ӽ�����������Ϸ������ͬʱ�������ƣ�ʤ��������ͼ��ʾ:
FigCJB.jpg
�ָ������˵Ľ����¼����ͳ��˫����ʤ��ƽ�������������Ҹ���˫���ֱ��ʲô
���Ƶ�ʤ�����
�����ʽ��
����� 1 �и��������� N����10^5������˫������Ĵ�������� N �У�
ÿ�и���һ�ν������Ϣ�����ס���˫��ͬʱ�����ĵ����ơ�C �������ӡ���
J ������������B ������������ 1 ����ĸ����׷����� 2 �������ҷ���
�м��� 1 ���ո�

�����ʽ��
����� 1��2 �зֱ�����ס��ҵ�ʤ��ƽ�������������ּ��� 1 ���ո�ָ���
�� 3 �и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ��м��� 1 ���ո�
������ⲻΨһ�����������ĸ����С�Ľ⡣
*/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int judge(char a,char b){
//	cout<<a<<b<<endl;
	if(a!=b){
		if((a=='J'&&b=='B')||(a=='B'&&b=='C')||(a=='C'&&b=='J')) 
			return 2;  //ʤ 
		else
			return 1;	//�� 
	}
	else
		return 0;		//ƽ 
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

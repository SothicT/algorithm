/*
��Ŀ����
����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE
2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm��������̽��
��������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04����
��Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣���
��4����ĸ'D'�����������ģ���2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ��
����һ����ĵ�14����ͷ������һ���0�㵽23��������0��9��
�Լ���д��ĸA��N��ʾ�����������ַ�����1����ͬ��Ӣ����ĸ's'������
��4��λ�ã���0��ʼ�������ϣ������4���ӡ��ָ��������ַ�����
���������Ħ˹����õ�Լ���ʱ�䡣
��������:
������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����
�������:
��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH:MM�������С�DAY����ĳ���ڵ�3�ַ�
��д����MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������THU��ʾ�����ģ�FRI
��ʾ�����壬SAT��ʾ��������SUN��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���
Ψһ�⡣
��������:
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
�������:
THU 14:04
*/ 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(void)
{
	char frist[61],second[61],thrid[61],four[61];
	int hour = 0,min = 0,flag = 0;
	string week;
	string Week[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"}; 
	cin>>frist>>second>>thrid>>four;
	for (int i = 0;frist [i] != '\0' ; i++ )
	{
		if(frist[i] == second[i] && flag == 0 && frist[i] >= 'A' && frist[i] <= 'G')
		{
			week = Week[(frist[i] - 'A')];				
			flag = 1;
			i++;
		}
		if(frist[i] == second[i] && flag == 1) 
		{				
			if(frist[i] <= '9') 	
				hour = frist[i] - '0';				
			else if(frist[i] >= 'A' && frist[i] <= 'N')
				hour = 10 + (frist[i] - 'A');
			break;
		}
	}
	for (int i = 0 ; thrid[i] != '\0' ; i++ )
	{
		if((thrid[i] == four[i]) &&((thrid[i]>='a' && thrid[i]<='z')||(thrid[i]>='A' && thrid[i] <='Z')))
		{
			min = i;
			break;
		}
	}
	cout<<week<<(hour < 10 ? " 0":" ")<<hour<<(min < 10 ?":0":":")<<min;
	return 0;	
}

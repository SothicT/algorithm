/*
题目描述
大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE
2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。大侦探很
快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，
因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是
第4个字母'D'，代表星期四；第2对相同的字符是'E'，那是第5个英文字母，
代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、
以及大写字母A到N表示）；后面两字符串第1对相同的英文字母's'出现在
第4个位置（从0开始计数）上，代表第4分钟。现给定两对字符串，
请帮助福尔摩斯解码得到约会的时间。
输入描述:
输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。
输出描述:
在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符
缩写，即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期四，FRI
表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在
唯一解。
输入例子:
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
输出例子:
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

/*
��Ŀ����
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
��������:
ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��
�������:
��һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�
*/
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(void)
{
	string str = "";
	int i=0,sum=0;
	cin>>str;
	while(i<str.size())
	{
		sum += str[i] - '0';//ǿ������ת�� 
		i++;
	}
	string num[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char result[10] = {0};
	sprintf(result,"%d",sum);//��sum�Ե����ַ���ʽ����result������ 
	cout<<num[result[0]-'0'];
	for(int i=1;result[i]!= '\0';i++)//�ж�result���ݲ�Ϊ�� 
	{
		cout<<" "<<num[result[i]-'0'];
	}
	return 0;
}
 

/*
���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ��
��������ѧ�š�
�����ʽ��
ÿ������������� 1 ��������������ʽΪ
�� 1 �У������� n
�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
  ... ... ...
�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ��������
���ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
struct Student
{
	char name[11];
	char id[11];
	int score;
};

int main(void)
{
	int i,j,n;
	struct Student *stu;
	int top=0,buttom=0;
	cin>>n;
	stu = (struct Student *)malloc( n*sizeof(struct Student));
	for(i = 0 ; i < n ; i++)
	{
		cin>>stu[i].name>>stu[i].id>>stu[i].score;
		if(stu[i].score<stu[buttom].score)
		{
			buttom = i;
		}
		if(stu[i].score>stu[top].score)
		{
			top = i;
		}
	}
	printf("%s %s\n",stu[top].name,stu[top].id);
	printf("%s %s\n",stu[buttom].name,stu[buttom].id);
	return 0;
}

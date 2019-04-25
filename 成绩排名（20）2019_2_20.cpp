/*
读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生
的姓名和学号。
输入格式：
每个测试输入包含 1 个测试用例，格式为
第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
  ... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩
其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，
这里保证在一组测试用例中没有两个学生的成绩是相同的。
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

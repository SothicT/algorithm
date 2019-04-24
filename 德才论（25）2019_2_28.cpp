/*
宋代史学家司马光在《资治通鉴》中有一段著名的“德才论”：“是故才德全尽
谓之圣人，才德兼亡谓之愚人，德胜才谓之君子，才胜德谓之小人。凡取人之术
，苟不得圣人，君子而与之，与其得小人，不若得愚人。”
现给出一批考生的德才分数，请根据司马光的理论给出录取排名。
输入格式：
输入第一行给出 3 个正整数，分别为：N（≤10^5），即考生总数；L（≥60），
为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；
H（<100），为优先录取线——
(1)德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高
到低排序；
(2)才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类
考生之后；
(3)德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜
才”者，按总分排序，但排在第二类考生之后；
(4)其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。
随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其
中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分
隔。
输出格式：
输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格
式输出一位考生的信息，考生按输入中说明的规则从高到低排序。当某类考生中有
多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
*/
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef struct
{
	int id;
	int d;
	int c;
	int sum;
	int level;
}student;
bool compare(student a,student b)
{
	if(a.level!=b.level) 
		return a.level>b.level;
	else if(a.sum!=b.sum) 
		return a.sum>b.sum;
	else if(a.d!=b.d)
		return a.d>b.d;
	else
		return a.id<b.id;
}
int main(void)
{
	int n,l,h,count;
	cin>>n>>l>>h;
	count = n;
	student stu[n];
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].id>>stu[i].d>>stu[i].c;
		stu[i].sum = stu[i].d+stu[i].c;
		if(stu[i].d>=h && stu[i].c>=h) 
			stu[i].level=5;
		else if(stu[i].d>=h && stu[i].c>=l && stu[i].c<h) 
			stu[i].level=4;
		else if(stu[i].d<h && stu[i].c<h && stu[i].d>=l && stu[i].c>=l && stu[i].d>stu[i].c)
			stu[i].level=3;
		else if(stu[i].d>=l && stu[i].c>=l && stu[i].d<h && stu[i].d<h)
			stu[i].level=2;
		else
		{
			stu[i].level=1;
			count--;		
		}
			
	}
	sort(stu,stu+n,compare);
	cout<<count<<endl;
	for(int i=0;i<count;i++)
	{
		if(i<count-1)
			cout<<stu[i].id<<" "<<stu[i].d<<" "<<stu[i].c<<endl;
		else
			cout<<stu[i].id<<" "<<stu[i].d<<" "<<stu[i].c;
	}
	
	return 0;
}

/*
�δ�ʷѧ��˾����ڡ�����ͨ��������һ�������ġ��²��ۡ������ǹʲŵ�ȫ��
ν֮ʥ�ˣ��ŵ¼���ν֮���ˣ���ʤ��ν֮���ӣ���ʤ��ν֮С�ˡ���ȡ��֮��
��������ʥ�ˣ����Ӷ���֮�������С�ˣ����������ˡ���
�ָ���һ�������ĵ²ŷ����������˾�������۸���¼ȡ������
�����ʽ��
�����һ�и��� 3 �����������ֱ�Ϊ��N����10^5����������������L����60����
Ϊ¼ȡ��ͷ����ߣ����·ֺͲŷ־������� L �Ŀ��������ʸ񱻿���¼ȡ��
H��<100����Ϊ����¼ȡ�ߡ���
(1)�·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ���������࿼�����²��ִܷӸ�
��������
(2)�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ��
����֮��
(3)�²ŷ־����� H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ
�š��ߣ����ܷ����򣬵����ڵڶ��࿼��֮��
(4)�����ﵽ����� L �Ŀ���Ҳ���ܷ����򣬵����ڵ����࿼��֮��
��� N �У�ÿ�и���һλ��������Ϣ��������׼��֤�� �·� �ŷ֣���
��׼��֤��Ϊ 8 λ�������²ŷ�Ϊ���� [0, 100] �ڵ����������ּ��Կո��
����
�����ʽ��
�����һ�����ȸ����ﵽ��ͷ����ߵĿ������� M����� M �У�ÿ�а��������
ʽ���һλ��������Ϣ��������������˵���Ĺ���Ӹߵ������򡣵�ĳ�࿼������
�����ܷ���ͬʱ������·ֽ������У����·�Ҳ���У���׼��֤�ŵ����������
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

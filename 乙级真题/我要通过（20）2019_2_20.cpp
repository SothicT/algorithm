/*
�õ�������ȷ���������ǣ�
 1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
 2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
 3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
 ���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�

��������:
ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�


�������:
ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��
*/ 
/*
����˼·��
��1���ֱ��¼P��A��T���������Լ���һ�γ���P��T��λ��
��2����һ���������жϣ�P��A��T������֮���Ƿ�Ϊstr�ܳ� 
��3�� 
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	int n,i,j,len;
	char str[101] = {0};
	string result[10]; 
	int count_p=0,count_a=0,count_t=0;
	int pos_p=0,pos_t=0;
	cin>>n;
	for(i = 0 ; i < n ; i++)
	{
		cin>>str;
		count_p=0,count_a=0,count_t=0,pos_p=0,pos_t=0;
		len = strlen(str);
		for(j = 0 ; j < len ; j++)
		{
			if(str[j] == 'P')
			{
				count_p++;
				pos_p = j;
			}
			if(str[j] == 'A')
			{
				count_a++;
			}
			if(str[j] == 'T')
			{
				count_t++;
				pos_t = j;
			}	
		}
		if((count_p+count_a+count_t) != len || count_p >1 || count_t>1
			|| (pos_t-pos_p) > 2 || pos_p*(pos_t-pos_p-1) != (len-pos_t-1))
			{
				result[i] = "NO";
			}
		else
		{
			result[i] = "YES";	
		}	
	}
	for(i = 0; i < n ; i++ )
	{
		cout<<result[i]<<endl;
	}
	return 0;
}


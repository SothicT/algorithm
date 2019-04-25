/*
得到“答案正确”的条件是：
 1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
 2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
 3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
 现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入描述:
每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。


输出描述:
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。
*/ 
/*
具体思路：
（1）分别记录P，A，T的数量，以及第一次出现P和T的位置
（2）第一个条件：判断（P、A、T）数量之和是否为str总长 
（3） 
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


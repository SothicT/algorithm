/*
设计函数求一元多项式的导数。（注：xn（n为整数）的一阶导数为nx^-1。）
输入格式:
以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过 1000 的整数）
。数字间以空格分隔。
输出格式:
以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，
但结尾不能有多余空格。注意“零多项式”的指数和系数都是 0，但是表示为0 0。
*/
#include <stdio.h>
int main(void)
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)printf("0 0");
		else printf("%d %d",a*b,b-1);;
		break;
	}
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0){break;}
		printf(" %d %d",a*b,b-1);; 
	} 
	return 0;
}
//#include<stdio.h>if()
//void ds(int a,int b)
//{
//    printf(" %d %d",a*b,b-1);
//}
//int main()
//{
//    int a,b;
//    while(~scanf("%d%d",&a,&b))  \\ACM中比较常见，其功能是循环从输					入流读取m和n，直到遇到EOF为止，等同于while (scanf("%d%d",&m,&n)!=EOF)。
//    {
//        if(b==0)printf("0 0");
//        else printf("%d %d",a*b,b-1);
//        break;
//    }
//    while(~scanf("%d%d",&a,&b))
//    {
//        if(b==0){break;}
//        ds(a,b);
//    }
//    return 0;
//}

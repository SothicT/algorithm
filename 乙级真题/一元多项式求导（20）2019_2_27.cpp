/*
��ƺ�����һԪ����ʽ�ĵ�������ע��xn��nΪ��������һ�׵���Ϊnx^-1����
�����ʽ:
��ָ���ݽ���ʽ�������ʽ������ϵ����ָ��������ֵ��Ϊ������ 1000 ��������
�����ּ��Կո�ָ���
�����ʽ:
����������ͬ�ĸ�ʽ�����������ʽ�������ϵ����ָ�������ּ��Կո�ָ���
����β�����ж���ո�ע�⡰�����ʽ����ָ����ϵ������ 0�����Ǳ�ʾΪ0 0��
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
//    while(~scanf("%d%d",&a,&b))  \\ACM�бȽϳ������书����ѭ������					������ȡm��n��ֱ������EOFΪֹ����ͬ��while (scanf("%d%d",&m,&n)!=EOF)��
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

/*
��Ŀ����
��Pi��ʾ��i�����������θ�����������M <= N <= 10000�������PM��PN������
������

��������:
������һ���и���M��N������Կո�ָ���

�������:
�����PM��PN������������ÿ10������ռ1�У�����Կո�ָ�������ĩ������
����ո�
*/
#include <stdio.h>
 
bool isPrime( int n ){
    int i = 2;
    for( i = 2; i <= n/i ; i ++)		//��i<n
	{	
        if( n % i == 0 )
            return false;
    } 
    return true;
}
int main( void ){
    int pm = 0, pn = 0;
    int i = 0, j = 0, cnt = 0, flg = 0;
     
    while( scanf("%d %d", &pm, &pn) != EOF ){
        cnt = 0; flg = 0;
        for( i = 2; ; i ++){
            if( isPrime(i) ){
                cnt ++;
                if( cnt >= pm && cnt <= pn ){
                    flg ++;
                    if( flg < 10 && cnt < pn ) printf("%d ", i);
                    else if( flg < 10 && cnt == pn ) printf("%d\n", i);
                    else{
                        flg = 0;
                        printf("%d\n", i);
                    }
                }
                if( cnt == pn ) break;
            }
        }   
    }
    return 0;
}

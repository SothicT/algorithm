/*
题目描述
令Pi表示第i个素数。现任给两个正整数M <= N <= 10000，请输出PM到PN的所有
素数。

输入描述:
输入在一行中给出M和N，其间以空格分隔。

输出描述:
输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有
多余空格。
*/
#include <stdio.h>
 
bool isPrime( int n ){
    int i = 2;
    for( i = 2; i <= n/i ; i ++)		//或i<n
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

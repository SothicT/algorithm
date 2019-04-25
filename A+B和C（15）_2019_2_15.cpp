/*
题目描述
给定区间[-2的31次方, 2的31次方]内的3个整数A、B和C，请判断A+B是否大于C。

输入描述:
输入第1行给出正整数T(<=10)，是测试用例的个数。随后给出T组测试用例，每组占一行，顺序给出A、B和C。整数间以空格分隔。

输出描述:
对每组测试用例，在一行中输出“Case #X: true”如果A+B>C，否则输出“Case #X: false”，其中X是测试用例的编号（从1开始）。
*/
#include <iostream>
using namespace std;
#define T 10
int main(void){
	int n;
	cin>>n;
	long A[T];
	long B[T];
	long C[T];
	int i;
	for(i=0;i<n;i++){
		cin>>A[i]>>B[i]>>C[i];
	}
	for (i=0;i<n;i++){
		if(A[i] > C[i] - B[i])
			cout<<"Case #"<<i+1<<": true"<<endl;
		else
			cout<<"Case #"<<i+1<<": false"<<endl;
	}
	return 0;
}
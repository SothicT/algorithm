#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	string week[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int week_pos=0,hour_pos=0,min_pos=0,flag=0,i=0;
	for(;a[i]!='\0';i++){
		if((a[i] == b[i])  && (a[i] >= 'A' && a[i] <= 'G')){
			week_pos = a[i] - 'A';
			break;
		}
	}
	for(i=i+1;a[i]!='\0';i++){
		if(a[i]==b[i]){
        	if(a[i] >= '0' && a[i] <= '9'){
          		hour_pos = a[i] - '0';
				break;
			}
        	else if(a[i] >= 'A' && a[i] <= 'N'){
          		hour_pos = 10 + (a[i] - 'A');
				break;
			}
        }
	}
	for(i=0;c[i]!='\0';i++){
		if(c[i] == d[i] && ((a[i] >= 'a' && a[i] <= 'z')||(a[i] >= 'A' && a[i] <= 'Z'))){
			min_pos = i;
			break;
		}
	}
	cout<<week[week_pos]<<(hour_pos>=10?" ":" 0")<<hour_pos<<(min_pos>=10?":":":0") <<min_pos; 
	return 0;
}



//find factorial of given number....

#include<stdio.h>
int main(){
	int n=5;
	int fac=1;
	int i=1;
	while(i<=n){
       fac=fac*i;
       i++;
	}
	
	printf("%d",fac);
}

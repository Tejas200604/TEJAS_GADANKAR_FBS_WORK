//find sum of first digit and last digit in a number....

#include<stdio.h>
int main(){
	int n=15986;
	int fdig,ldig;
	int temp=n;
	int sum;
	ldig=n%10;
	while(n>0){
		fdig=n%10;
		n=n/10;
	}
	sum=ldig+fdig;
	printf("%d",sum);
}


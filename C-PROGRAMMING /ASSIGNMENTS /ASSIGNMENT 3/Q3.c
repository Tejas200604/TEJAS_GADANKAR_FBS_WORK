//Sum of numbers in given range.
//Find sum of numbers from start to end.

#include<stdio.h>
int main(){
	int i=1;
	int sum=0;
	while(i<=5){
		sum += i;
		i++;
	}
	printf("sum %d",sum);
	return 0;
}

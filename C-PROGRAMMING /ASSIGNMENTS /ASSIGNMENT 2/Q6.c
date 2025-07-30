//Accept a number and check if it is divisible by 3, 5, or both.

#include<stdio.h>
int main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	
	if(num%3==0&&num%5==0){
		printf("number is divisible by both 3&5");
	}
	else if(num%3==0&&num%5!=0){
		printf("number is divisible by 3 not 5 ");
	}
	else if(num%3!=0&&num%5==0){
		printf("number is divisible by 5 not 3");
	}
	else{
		printf("number is not divisible by both");
	}
	return 0;
}


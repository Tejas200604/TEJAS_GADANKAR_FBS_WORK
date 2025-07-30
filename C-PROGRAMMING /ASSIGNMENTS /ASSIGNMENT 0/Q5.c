//Write a program to input 5 numbers and find their average

#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5;
	float average;
	printf("enter the numbers:");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	
	average=(num1+num2+num3+num4+num5)/5.0;
	printf("%f",average);
	
}

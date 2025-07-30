//Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int main(){
	int num1=10;
	int num2=20;
	int num3=5;
	
	if(num1>num2&&num1>num3){
		printf("num1 is greatest");
	}
	else if(num2>num1&&num2>num3){
		printf("num2 is greatest");
	}
	else{
		printf("num3 is greaatest");
	}
}

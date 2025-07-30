//Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
void main(){
	int num=504;
	int firstnum=num/100;
	int lastnum=num%10;
	
	if(firstnum==lastnum){
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
}


//Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
int main(){
	char ch='A';
	if(ch>='A' &&ch<='Z'){
		printf("uppercase character");
	}
	else{
		printf("lowercase character");
	}
}

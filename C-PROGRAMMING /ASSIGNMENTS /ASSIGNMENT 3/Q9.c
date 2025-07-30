
//check the given number is palindrome or not...

#include<stdio.h>
int main(){
	int n=1551;
	int rem;
	int sum=0;
	int temp=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp){
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
}

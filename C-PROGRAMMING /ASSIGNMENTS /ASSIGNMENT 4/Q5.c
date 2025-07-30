/* Write a menu driven program to take a number for user and perform operations as follows. 
Press 1.To check number is even or odd. 
2.To check number is prime or not. 
3.To check number is pallindrome or not. 
4.To check number is positive, negative or zero. 
5.To reverse a number. 
6.To find sum of digits.*/


#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int ch;
	printf("enter your choice to  perform operation:\n Press 1 To check number is even or odd.\n2 To check number is prime or not.\n 3 To check number is pallindrome or not.\n4 To check number is positive, negative or zero.\n5 To reverse a number.\n6 To find sum of digits.\nchoice:");
	 scanf("%d",&ch);
	 
	 if(ch==1){
	 	if(n%2==0){
	 		printf("number is even.");
		 }
		 else{
		 	printf("number is odd.");
		 }
	 }
	 else if(ch==2){
	 	if(n<=2){
	 		printf("number is prime");
		 }
		 while(n>2){
		 	if(n%2==0){
		 		printf("number is prime");
			 }
			 else{
			 	printf("number is not prime");
			 }
		 }
	 }
	 else if(ch==3){
	 	int temp=n,rem,sum=0;
	 	while(temp>0){
	 		rem=temp%10;
	 		sum=sum*10+rem;
	 		temp=temp/10;
		 }
		 if(sum==n){
		 	printf("number is palindrome");
		 }
		 else{
		 	printf("number is not palindrome");
		 }
	 }
	 else if(ch==4){
	 	if(n>0){
	 		printf("number is positive");
		 }
		 else if(n<0){
		 	printf("number is negative");
		 }
		 else{
		 	printf("number is zero");
		 }
	 }
	 else if(ch==5){
	 	int temp=n,sum=0,digit;
	 	while(temp>0){
	 		digit=temp%10;
	 		sum=sum*10+digit;
	 		temp=temp/10;
	 	    }
	 	    printf("%d",sum);
	 }
	 else if(ch==6){
	 	int temp=n,sum=0,digit;
	 	while(temp>0){
	 		digit=temp%10;
	 		sum=sum+digit;
	 		temp=temp/10;
		 }
		 printf("%d",sum);
	 }
	 else{
	 	printf("wrong choice...");
	 }
}
	

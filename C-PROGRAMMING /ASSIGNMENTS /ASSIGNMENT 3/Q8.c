//Check the given number is Strong number or not.

#include<stdio.h>
int main(){
   int n=150;
   int sum=0;
   int rem;
   int temp=n;
   
   while(n>0){
     rem=n%10;
     int fact=1;
     while(rem>=1){
     	fact=fact*rem;
     	rem--;
	 }
     sum=sum+fact;
     n=n/10;
   }
   if(sum==temp){
   	printf("strong number");
   }
   else{
   	printf("not a strong number ");
   }
}

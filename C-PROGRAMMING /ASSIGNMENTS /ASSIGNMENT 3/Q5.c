//check the given number is armstrong or not....
	
#include<stdio.h>
int main(){
	int n=150;
	int rem;
    int sum=0;
    int temp=n;
    while(n>0){
    	rem=n%10;
    	sum=rem*rem*rem+sum;
    	n=n/10;
	}
    
	if(sum==temp){
		printf("armstrong number");
	}
	else{
		printf("not an armstrong number");
	}

}

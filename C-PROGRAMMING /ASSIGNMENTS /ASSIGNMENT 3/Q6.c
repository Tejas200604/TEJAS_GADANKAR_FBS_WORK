//check the given number is perfect number or not....

#include<stdio.h>
int main(){
	int n=28;
	int sum=0;
	int rem;
	int temp=n;
	int i=1
	while(i<n){
		if(n%i==0){
			sum += 1;
		}
		i++;
	}
	if(sum==temp){
		printf("perfect number");
	}
	else{
		prinntf("not a perfect number");
	}
}

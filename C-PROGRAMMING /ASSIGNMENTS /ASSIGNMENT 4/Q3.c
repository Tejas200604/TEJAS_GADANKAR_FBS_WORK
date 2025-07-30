// Print perfect numbers in the given range 1 to n. 

#include<stdio.h>
int main(){
	int s,e,n;
	printf("enter the starting point of range:");
	scanf("%d",&s);
    printf("enter the ending point of range:");
	scanf("%d",&e);
	
	printf("the perfect numbers from range %d to %d are:",s,e);
	
	for(n=s;n<=e;n++){
		int sum=0,i;
	    for(i=1;i<n;i++){
	    	if(n%i==0){
	    		sum=sum+i;
			}
		}
		if(sum==n){
				printf("%d\n",n);
			}
	
		}
		return 0;
	}

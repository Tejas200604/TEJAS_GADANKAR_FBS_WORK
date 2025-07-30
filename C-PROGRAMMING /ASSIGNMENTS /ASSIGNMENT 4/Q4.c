	// Print strong numbers in the given range 1 to n.
	
#include<stdio.h>
void main(){
	int s,e,n;
	printf("enter the starting point of range:");
	scanf("%d",&s);
    printf("enter the ending point of range:");
	scanf("%d",&e);
	
	printf("the strong numbers from range %d to %d are:",s,e);
    for(n=s;n<=e;n++){
    	 int temp=n,fact=1,sum=0,i;
    	 while(temp>=1){
    	     int digit=temp%10;
    	     int fact=1;
    	     for(i=1;i<=digit;i++) {
			       		
		           fact=fact*i;
	            }
    	 	
			 sum=sum+fact;
		 	temp=temp/10;
		 }
		 	
		 if(sum==n){
		 	printf("%d\n",n);
		 }
	}
}

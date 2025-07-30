//print prime number from given 1 to n range...

#include<stdio.h>
int main(){
	int s,e,n;
	printf("enter the starting point of range:");
	scanf("%d",&s);
    printf("enter the ending point of range:");
	scanf("%d",&e);
	
	printf("the prime numbers from range %d to %d are:",s,e);

	int i;
	for(n=s;n<=e;n++){
	     int flag=1;
	     
		 if(n<2){
	     	 flag=0;
		 }
		 else{
		 	
		 	for(i=2;i<=n/2;i++){
		 		if(n%i==0){
		 			flag=0;
		 			break;
				 }
				
				 }
				 
			 }
		  if(flag==1){
			printf("%d\n",n);	
		 }
		 
	     
		}
	}

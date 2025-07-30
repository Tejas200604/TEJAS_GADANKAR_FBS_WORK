//print armstrong numbers from given 1 to n range...

#include<stdio.h>
void main(){
	int s,e,i;
     printf("enter the range to start from..");
     scanf("%d",&s);
     printf("enter the range to end...");
     scanf("%d",&e);
	
	printf("armstrong nummbers from %d to %d are:",s,e);
	
	for( i =s;i <= e;i++){
		int temp=i,rem,sum=0,n=i;
	    while(temp>0){
	    	rem=temp%10;
	    	sum=rem*rem*rem+sum;
	    	temp=temp/10;
		}
		if(sum==n){
			printf("%d\n",i);
		}
	}
}

// Print a hollow square with diagonal pattern...

#include<stdio.h>
void main(){
	int i,j,n=4;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n||i==j){
				printf("* ");
			}
			else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}


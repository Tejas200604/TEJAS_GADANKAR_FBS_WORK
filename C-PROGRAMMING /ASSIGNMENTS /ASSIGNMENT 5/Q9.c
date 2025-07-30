//Print a hollow square pattern

#include<stdio.h>
void main(){
	int i,j,n=4;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n){
				printf("* ");
			}
			else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}

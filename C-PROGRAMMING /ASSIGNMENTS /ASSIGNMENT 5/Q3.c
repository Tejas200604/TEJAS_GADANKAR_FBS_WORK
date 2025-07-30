//Print an inverted right-angled triangle pattern...

#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;i+j<=6;j++){
			printf("* ");
		}
		printf("\n");
	}
}

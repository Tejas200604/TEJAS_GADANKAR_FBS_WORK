//pyramid pattern

#include <stdio.h>

void main() {
    int n = 5,i,j,s;
    for( i=1;i<=n;i++) {
        for(s=1;s<=n-i;s++){
        	printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

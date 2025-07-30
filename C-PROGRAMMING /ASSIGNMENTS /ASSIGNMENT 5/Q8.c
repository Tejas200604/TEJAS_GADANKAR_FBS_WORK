//Print a pattern of stars in diamond shape

#include<stdio.h>
void main() {
    int n = 4,i,j,s;
    for(i=1;i <= n;i++) {
        for(s=1;s<= n-i;s++) {
            printf(" ");
        }
        for(j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--) {
        for(s=1;s<=n-i;s++) {
            printf(" ");
        }
        for(j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}


//mystrlower

#include <stdio.h>

void mystrlower(char *);

void main() 
{
    char str[20]="FIRSTBIT";
    mystrlower(str);
    printf("lowercase str = %s",str);
}
void mystrlower(char *str) {
    int i = 0;
    while(str[i] != '\0') 
	{
     if(str[i]>='A' && str[i]<='Z') 
	 {
       str[i]=str[i] + 32;
     }
     i++;
    }
}

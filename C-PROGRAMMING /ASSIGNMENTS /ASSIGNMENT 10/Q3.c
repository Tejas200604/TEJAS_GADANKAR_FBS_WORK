//mystrcmp

#include <stdio.h>

int mystrcmp(char *str1,char *str2);

void main() 
{
    char str1[10]="firstbit";
    char str2[10]="firstbit";
    
    printf("%d",mystrcmp(str1,str2));
}
int mystrcmp(char *str1,char *str2)
{
    int i=0;
    while(str1[i]!='\0'&&str2[i]!='\0') {
        if(str1[i]!=str2[i])
        return str1[i]-str2[i]; 
        i++;
    }
    return str1[i]-str2[i]; 
}

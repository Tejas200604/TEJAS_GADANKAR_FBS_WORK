// WAP Replace all Occurrences of �a� with $ in a String

#include <stdio.h>

void main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = '$';
        }
    }

    printf("Modified string: %s\n", str);
}


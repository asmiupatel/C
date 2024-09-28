#include <stdio.h>
#include <string.h>

int main()
{
    char str1[40];
    char str2[40];
    char str3[] = " is a friend of ";
    printf("Enter a name: ");
    gets(str1);
    printf("Enter another name: ");
    gets(str2);
    strcat(str1, str3);
    strcat(str1, str2);
    puts(str1);
    return 0;
}
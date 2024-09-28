#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "acid";
    char str2[] = "fairy";
    char str3[23];
    // puts(strcat(str1, str2));
    printf("The length of str1 is %d.\n", strlen(str1));
    printf("The length of str2 is %d.\n", strlen(str2));
    printf("The reverse of str1 is %d:");
    puts(strrev(str1));
    printf("The reverse of str2 is %d:");
    puts(strrev(str2));

    strcpy(str3, strcat(str1, str2));
    puts(str3);

    printf("The strcmp for str1 and str2 returned %d", strcmp(str1, str2));
    return 0;
}

/*
    must include <string.h>

    strcat() - combines two given strings
    strlen() - gives teh length of a given string
    strrev() - reverses the order of a given string
    strcpy() - to copy one string into another
    strcmp() - compares two given strings
*/
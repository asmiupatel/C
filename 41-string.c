#include <stdio.h>

void printStr(char str[]) {
    int i = 0;
    while (str[i]!= '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char str[] = {'a', 's', 'm', 'i', '\0'};
    gets(str);
    printf("Using puts:\n");
    puts(str);
    printf("Using function:\n");
    printStr(str);
    printf("Usinf printf:\n");
    printf("%s", str);
    return 0;
}
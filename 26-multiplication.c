#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number you want multiplication table of ");
    scanf("%d\n", &a);
    printf("The multiplicatin table of %d is:\n", a);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }
    
    return 0;
}

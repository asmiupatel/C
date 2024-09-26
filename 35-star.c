#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter '1' for triangular pattern and '2' for reversed triangular pattern. ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Enter the number of lines in the pattern. ");
        scanf("%d", &b);

        for (int i = 1; i <= b; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        break;

    case 2:
        printf("Enter the number of lines in the pattern. ");
        scanf("%d", &b);

        for (int i = 1; i <= b; i++)
        {
            for (int j = b; j >= i; j--)
            {
                printf("*");
            }
            printf("\n");
        }

    default:
        printf("Please enter a valid input.");
        break;
    }
    return 0;
}
#include <stdio.h>

int main()
{

    int array[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the element at position [%d] [%d]\n", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    {
    }
    printf("The elements of the array are:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
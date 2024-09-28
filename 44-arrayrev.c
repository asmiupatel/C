#include <stdio.h>

void arrRev(int arg[])
{

    printf("Before reversing: \n");

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arg[i]);
    }

    printf("\n");
    printf("After reversing: \n");

    for (int j = 6; j > -1; j--)
    {
        printf("%d ", arg[j]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 66, 7};
    arrRev(arr);
    return 0;
}
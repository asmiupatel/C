#include <stdio.h>

int main()
{

    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element %d of the array: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("The elements of the array are:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
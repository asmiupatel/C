#include <stdio.h>

void func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d id %d.\n", i, array[i]);
    }
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d id %d.\n", i, ptr[i]);
    }
    *(ptr + 1) = 6767;
}

int main()
{
    int arr[] = {23, 4, 26, 43};
    func1(arr);
    printf("\n");
    func2(arr);
    printf("\n");
    func2(arr);
    return 0;
}
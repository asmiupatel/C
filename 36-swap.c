#include <stdio.h>

void swap(int* x, int* y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a, b;
    printf("Enter two numbers you want to swap:\n");
    scanf("%d %d", &a, &b);
    printf("The numbers you entered are %d and %d.\n", a, b);
    swap(&a, &b);
    printf("The numbers swapped are %d and %d.", a, b);
    return 0;
}
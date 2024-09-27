#include <stdio.h>

void add(int* x, int* y) {
    
    int temp = *x+*y;
    *x = temp;
    return;
}

void sub(int* x, int* y) {

    int temp = *x - *y;
    *x = temp;
    return;
}

int main()
{
    int a, b, c;
    printf("Enter the values of a and b.\n");
    scanf("%d %d", &a, &b);
    printf("The values of a and b as of right now are %d and %d.\n", a, b);
    c = a; //storing the value of a in c
    add(&a, &b);
    printf("The addition of a and b is %d.\n", a);
    a = c; //giving a back its original value that we had stored before in c
    sub(&a, &b);
    printf("The subtraction of a and b is %d.\n", a);
    return 0;
}
//took me a while
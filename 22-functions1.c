#include <stdio.h>

int sum(int a, int b){
    return a +b;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 56;
    c = sum(a, b);
    printf("The sum of a and b is %d.\n", c); 
    return 0;
}

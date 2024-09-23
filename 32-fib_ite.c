#include <stdio.h>
int fib(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int main()
{
    int number;
    printf("Enter the index to get the fibonacci series: ");
    scanf("%d", &number);
    printf("The value of %d term in fibonacci series is %d", number, fib(number));
    return 0;
}
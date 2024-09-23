#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{

    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    int b;
    b = fib(a);
    printf("The Fibonacci number of %d is %d", a, b);

    return 0;
}

/*

fib_recursive(int n);
if n==1 or n==2;
return n

else
return fib_recursive(n-1) + fib_recursive(n-2)

*/

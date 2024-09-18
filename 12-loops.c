#include <stdio.h>

int main()
{
    int a;
    int i = 0;

    printf("Enter a number:\n");
    scanf(" %d", &a);

    while (i < a)
    {
        printf("Hello\n");
        i = i+1;
    }
    
    return 0;
}


/*
    basic syntax:

    loop starts - check the condition
    if condition is false: exit the loop
    if condition is true: execute loop

*/

/*
    types of loop:

    1. do while loop
    2. while loop
    3. for loop
*/

/*
    if statement
    if else statement
    if else if ladder
    nested if
*/

/*
    flowchart for if statement:
    if condition is true: executes if code
    if condition false: executes after if code

*/

/*
    flowchart for if else statement:
    if condition is true: executes if code
    if condition is false: executes else code
    next step: execute  after code
*/

/*
    flowchart for if-else if ladder: (three conditions)
    if condition 1 is true: executes statement 1 then moves to after code
    if condition 1 is false: moves on to check condition 2 (else if)
    if condition 2 is true: executes statement 2 then moves to after code
    if condition 2 is false: moves to else to executes statement n then moves to after code
*/

/*
    syntax for if statement:

    if (condition) {
        //code
    }
*/

/*
    syntax for if else statement:

    if (condition) {
        if true
    }
    else {
        if false
    }
*/

/*
    syntax for if else if ladder:

    if (condition 1) {
        code 1
    }
    else if {
        code 2
    }
    .
    .
    .
    else {
        code n
    }
*/

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age.\n");

    scanf("%d", &age);
    printf("You have eneterd %d as your age.\n", age);

    if (age >= 18)
    {
        printf("You can vote.\n");
    }
    else if (age >= 10)
    {
        printf("You are between 10 to 18 and you can vote for kids.\n");
    }
    else if (age >= 3)
    {
        printf("You are between 3 to 10 and you can vote for babies.\n");
    }
    else
    {
        printf("You can not vote.\n");
    }
    

    return 0;
}

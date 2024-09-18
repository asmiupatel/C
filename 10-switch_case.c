#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("The age is 3.\n");
        break;
    
    case 13:
        printf("The age is 13.\n");
        break;
        
    case 23:
        printf("The age is 23.\n");
        break;
    default:
        printf("Age is not 3, 13 or 23.\n");
        break;
    }

    return 0;
}







/*
    rules for switch statement
    1. switch expression - must be an int or a char
    2. case value must be an int or a char
    3. case must come inside switch
    4. break is not a must
*/

/*
    flowchart for switch case statement:

   if input matches case 1: executes statement 1, breaks and moves outside switch
   if input doesnt match case 1: moves to case 2
   if input matches case 2: executes statement 2, breaks and moves outside switch
   if input doesnt match case 2: moves to case 3
   if input matches case 3: executes statement 3, breaks and moves outside switch
   if input doesnt match case 3: moves to default, executrs statement n and moves outside switch 
*/
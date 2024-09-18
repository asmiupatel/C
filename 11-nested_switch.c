#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Enter your marks:\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3.\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45.\n");
            break;
        
        default:
            printf("Your marks are not 45.\n");
        }
        break;
    
    case 13:
        printf("The age is 13.\n");
        switch (marks)
        {
        case 50:
            printf("Your marks are 50.\n");
            break;
        
        default:
            printf("Your marks are not 50.\n");
        }
        break;

        
    case 23:
        printf("The age is 23.\n");
        switch (marks)
        {
        case 55:
            printf("Your marks are 55.\n");
            break;
        
        default:
            printf("Your marks are not 55.\n");
        }
        break;  

    default:
        printf("Age is not 3, 13 or 23.\n");
        printf("Your marks are not 45, 50 or 55.\n");
    }

    return 0;
}

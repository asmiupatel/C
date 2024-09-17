// maths and science- 45
//maths -15
//science-15

//print the type of gift you are giving to them

#include <stdio.h>

int main()
{
    int maths;
    int science;
    printf("Did you pass the maths exam? 1 for yes, 0 for no\n");
    scanf("%d", &maths);
    printf("Did you pass the science exam? 1 for yes, 0 for no\n");
    scanf("%d", &science);

    if(maths == 1 && science == 1){
        printf("Congratulations! You have passed both maths and science exam. Here's a gift of $45.\n");
    }
    
    else if(maths == 1 && science == 0){
        printf("Congratulations! You passed maths exam. Here's a gift of $20.\n");
    }

    else if(maths == 0 && science == 1){
        printf("Congratulations! You passed science exam. Here's a gift of $20.\n");
    }

    else{
        printf("Sorry you have  both your exams. Better luck next time.\n");
    }
    return 0;
}

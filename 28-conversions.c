/*
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
*/

#include <stdio.h>

void kms(int num)
{
    printf("The conversion of %d into miles is %f.\n", num, num * 0.62);
}
void inc(int num)
{
    printf("The conversion of %d into foot is %f.\n", num, num * 0.083);
}
void cms(int num)
{
    printf("The conversion of %d into inches is %f.\n", num, num * 0.39);
}
void pound(int num)
{
    printf("The conversion of %d into kgs is %f.\n", num, num * 0.45);
}
void inches(int num)
{
    printf("The conversion of %d into meters is %f.\n", num, num * 0.025);
}

int main()
{
    char j;
    int a;
    int i;

    while (1)
    {
        printf("Enter a if you want to do conversion, q if you want to exit.\n");
        scanf(" %c", &j);
        if (j == 'a')
        {
            printf("Enter\n1 for kms to miles\n2 for inches to foot\n3 for cms to inches\n4 for pounds to kgs\n5 for inches to meters.\n");
            scanf("%d", &i);

            if (i >= 1 && i <= 5)
            {
                printf("Enter the number you want converted:\n");
                scanf("%d", &a);

                if (i == 1)
                {
                    kms(a);
                }
                else if (i == 2)
                {
                    inc(a);
                }
                else if (i == 3)
                {
                    cms(a);
                }
                else if (i == 4)
                {
                    pound(a);
                }
                else if (i == 5)
                {
                    inches(a);
                }
            }
            else
            {
                printf("Invalid option. Please enter a number between 1 and 5.\n");
            }
        }
        else if (j == 'q')
        {
            break;
        }
        else
        {
            printf("Invalid option. Please enter 'a' or 'q'.\n");
        }
    }
    return 0;
}
// i sleep at 10pm
// but cuz i was doing this i couldnt
// thenks die for you by joji
// 21 september 2024 10:23 pm
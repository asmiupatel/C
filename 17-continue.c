#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age:\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            continue;
        }
        printf("hi\n");
        printf("hi\n");
        printf("hi\n");
        printf("hi\n");
        printf("bye\n");
    }
    
    return 0;
}

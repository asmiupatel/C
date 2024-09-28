#include <stdio.h>
#include <string.h>

union student {

    char name[40];
    int age;
    int id;
};

int main()
{
    union student s1,s2,s3;

    s1.age = 21;
    s1.id = 72;
    strcpy(s1.name, "Jimbo");

    printf("%d\n", s1.id);//would not be printed cuz is overwritten by Jimbo
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);//RAAAAAH JIMBO WORLD DOMINATION
    
    return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct students {

    char name[40];
    int age;
    int id;
} std; // changing the name to std

int main()
{
    std s1, s2, s3;
    
    strcpy(s1.name, "Mitochondria");
    strcpy(s2.name, "Amoeba");
    strcpy(s3.name, "Penicillin");
    s1.age = 17;
    s2.age = 8;
    s3.age = 19;
    s1.id = 31;
    s2.id = 43;
    s3.id = 56;

    printf("%s, ID number %d is %d years old.\n", s1.name, s1.id, s1.age);
    printf("%s, ID number %d is %d years old.\n", s2.name, s2.id, s2.age);
    printf("%s, ID number %d is %d years old.\n", s3.name, s3.id, s3.age);

    return 0;
}
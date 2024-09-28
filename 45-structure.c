#include <stdio.h>
#include <string.h>

struct people
{
    char name[20];
    int age;
    int id;
    char fav_letter;
};
struct people p1, p2, p3;

int main()
{

    strcpy(p1.name, "Vanessa");
    strcpy(p2.name, "Michelle");
    strcpy(p3.name, "Daniel");

    p1.age = 23;
    p2.age = 19;
    p3.age = 21;

    p1.id= 71;
    p2.id = 78;
    p3.id = 20;

    p1.fav_letter = 'v';
    p2.fav_letter = 'd';
    p3.fav_letter = 'k';

    printf("Id %d, name %s is %d years old and their favourite letter is %c.\n", p1.id, p1.name, p1.age, p1.fav_letter);
    printf("Id %d, name %s is %d years old and their favourite letter is %c.\n", p2.id, p2.name,p2.age, p2.fav_letter);
    printf("Id %d, name %s is %d years old and their favourite letter is %c.\n", p3.id, p3.name, p3.age, p3.fav_letter);
    return 0;
}
/*
    syntax

    struct [estructure]
    {
    // datatype variables
    // datatype variables
    // datatype variables
    } [strcutrure_variables];
*/

/*

    struct students
    {
    int id;
    int marks;
    char fav_color;
    }s1, s2, s3;

    OR

     struct students
    {
    int id;
    int marks;
    char fav_color;
    };

    struct students s1, s2, s3;
*/

// (.) is called structure memeber operator
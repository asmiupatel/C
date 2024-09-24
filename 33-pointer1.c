#include <stdio.h>

int main() {

    int a = 56;
    int* ptra =&a;

    printf("The value of a is %d.\n", *ptra); // dereferencing operator used  thats why it would print the value of a
    printf("The address where a is stored is %x.\n", ptra); // prints te address of hte pointer where the value of a is stored
    printf("The value of a is %d.\n", a); // directly prints the value of a
    printf("The address of pointer a is %p.\n", &ptra);
    printf("The value of a is %d.\n", *ptra);

    // p2
    int* ptr2 = NULL;
    printf("The address of the pointer to a is %p.\n", &ptra);
    printf("The address of a is %p.\n", &a);
    printf("The address of a is %p.\n", ptra);
    printf("The address of some garbage is %p.\n", ptr2);
    printf("The address of a is %d.\n", *ptra);
    printf("The value of a is %d.\n", a);

    return 0;
}   

//blood
//i think
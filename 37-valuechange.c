#include <stdio.h>

void valueChange(int* fruit){
    // fruit cut im just having fun
    *fruit = 23;
}

int main()
{
    int a = 76;
    printf("The value of a as of right now is %d.\n", a);
    valueChange(&a);
    printf("The value of a as of right now is %d.", a);
    return 0;
}
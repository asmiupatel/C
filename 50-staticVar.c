#include <stdio.h>

int func1(){
    
    static int japan =1;
    japan++;
    return japan;

}
int main()
{
    printf("The counter has increased %d times.\n", func1());
    printf("The counter has increased %d times.\n", func1());
    printf("The counter has increased %d times.\n", func1());
    printf("The counter has increased %d times.\n", func1());
    return 0;
}
/*
syntax

static data_type name = value;
*/
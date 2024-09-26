#include <stdio.h>
int main()
{
    int arr[] = {31,52,3,4,5,45,67,8,53};
    printf("The value at position 8 is %d\n", arr[8]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr + 1);
    
    printf("The value at address of the first element of the array is %d\n", *(arr));
    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of the first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of the second element of the array is %d\n", *(arr + 1));
    return 0;
}

//this was boring and confusing
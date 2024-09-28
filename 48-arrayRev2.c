#include <stdio.h>

void arrRev(int array[]) {

    for (int i = 0; i < 6/2; i++) // divided by 2 cuz we only need to iterate half the array in order to reverse it
    {
        int temp = array[i];
        array[i] = array[5-i];
        array[5-i] = temp;
    }
    
}

void main()
{
    int arr[] = {11, 23, 45, 67, 70, 99};

    printf("The array before reversing is:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("The %d element of the array is %d.\n", i, arr[i]);
    }
    arrRev(arr);
    printf("\nThe array after reversing is:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("The %d element of the array is %d.\n", i, arr[i]);
    }

}
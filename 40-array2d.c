#include <stdio.h>

int funcc(int arr[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d and %d is %d.\n", i, j, arr[i][j]);
        }
        
    }
    
}

int main()
{
    int array[][2] = {{2,15}, {4, 17}};
    funcc(array);
    return 0;
}
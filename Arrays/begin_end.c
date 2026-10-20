	
#include <stdio.h>

#define SIZE 5

int main()
{
    int arr[SIZE], b[SIZE];
    int i, j, l = 0;

    printf("Enter the array elements:\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d. arr[%d] = ", i + 1, i);
        scanf("%d", &arr[i]);
    }

    i = 0;
    j = SIZE - 1;

    while(i <= j)
    {
        b[l] = arr[i];
        l++;
        i++;

        if(i <= j)
        {
            b[l] = arr[j];
            l++;
            j--;
        }
    }

    printf("\nRearranged array:\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}


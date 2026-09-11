#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("%d.",i+1);
        scanf("%d",&ptr[i]);
    }
    int large = ptr[0],small = ptr[0];
    for(int i=0;i<5;i++)
    {
        if(ptr[i]>large)
        {
            large = (ptr[i]);
        }
        if(small>ptr[i])
        {
            small = ptr[i];
        }
    }
    printf("large = %d \t\n",large);
     printf("small is %d\n",small);
     free(ptr);
     return 0;
}
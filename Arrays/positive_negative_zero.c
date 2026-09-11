#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,*ptr = NULL,*positive = NULL,*negative = NULL, *zero = NULL,positive_c=0,negative_c=0,zero_c=0;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	ptr = (int*)malloc(size*sizeof(size));
	if(ptr == NULL)
	{
		perror("Error ");
		return 0;
	}
	printf("enter the array elements of size %d ",size);
	for(int i=0;i<size;i++)
	{
		printf("%d.",i+1);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<size;i++)
	{
		if(ptr[i]>0)
		{
			positive_c++;
		positive = realloc(positive,positive_c*sizeof(int));
		if(positive == NULL)
		{
			perror("Error");
			free(ptr);
			return 0;
		}
		positive[positive_c-1]=ptr[i];
		}
		else if(ptr[i]<0)
		{
			negative_c++;
			negative = realloc(negative,negative_c*sizeof(int));
			if(negative == NULL)
			{
				perror("error");
				free(ptr);
				free(negative);
				return 0;
			}
			negative[negative_c-1]=ptr[i];
		}
		else
		{
			zero_c++;
			zero = realloc(zero,zero_c*sizeof(int));
			if(zero == NULL)
			{
				perror("Error");
				free(ptr);
				free(zero);
				return 0;
			}
			zero[zero_c-1]=ptr[i];
		}
	}
	printf("Number of positive values in array is %d\n",positive_c);
	printf("positive values are : ");
	for(int i=0;i<positive_c;i++)
	{
		printf("%d ",positive[i]);
	}
	printf("\n");
	printf("Number of Negative values in array is %d\n",negative_c);
	 printf("negative values are : ");
        for(int i=0;i<negative_c;i++)
        {

                printf("%d ",negative[i]);
        }
        printf("\n");
	printf("Number of zero values in array is %d\n",zero_c);
	 printf("zero values are : ");
        for(int i=0;i<zero_c;i++)
        {
                printf("%d ",zero[i]);
        }
        printf("\n");
}

	


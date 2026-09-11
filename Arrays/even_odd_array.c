#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,*ptr,even_count=0,odd_count=0,*ptr_even = NULL,*ptr_odd = NULL;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	ptr = (int *)calloc(size,sizeof(int));
	if(ptr == NULL)
	{
		perror("Memory allocation failed");
		return 0;
	}
	printf("Enter the array elements:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<size;i++)
	{
		if(ptr[i]%2==0)
		{
			even_count++;
		ptr_even=(int *)realloc(ptr_even,even_count*sizeof(int));
			if(ptr_even ==NULL)
			{
				perror("Realloc failed");
				free(ptr);
				return 0;
			}
			ptr_even[even_count-1] = ptr[i];
		}

		else
		{
			odd_count++;
			ptr_odd = (int *)realloc(ptr_odd,odd_count*sizeof(int));
			if(ptr_odd == NULL)
			{
				perror("Realloc failed");
				free(ptr);
				free(ptr_even);
				return 0;
			}
					
					ptr_odd[odd_count-1]=ptr[i];
		}
				
	}	
	printf("Even array is : ");
	for(int i=0;i<even_count;i++)
	{
		printf("%d ",ptr_even[i]);
	}
	printf("\n");
	printf("Odd array is : \t");
	for(int i=0;i<odd_count;i++)
	{
		printf("%d ",ptr_odd[i]);
	}
	free(ptr);
	free(ptr_even);
	free(ptr_odd);
	return 0;
}

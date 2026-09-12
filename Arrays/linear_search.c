#include<stdio.h>
#include<stdlib.h>
#define for_loop for(int i=0;i<size;i++)

int main()
{
	int size,*ptr = NULL;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	ptr = (int*)calloc(size,sizeof(*ptr));
	if(ptr == NULL)
	{
		perror("Error");
		return 0;
	}
	printf("Enter the array elements:\n");
	for_loop
	{
		printf("%d.",i+1);
		scanf("%d",&ptr[i]);
	}
	printf("Enter the number you want to search:\n");
	int x;
	scanf("%d",&x);
	int count = 0;
	for_loop
	{
		if(x == ptr[i])
		{
			count++;
			printf("value %d is present at index %d\n",x,i+1);
			break;
		}
	}
		if(count == 0)
		{
			printf("value %d is not present in array\n",x);
		}
	free(ptr);
	return 0;
}


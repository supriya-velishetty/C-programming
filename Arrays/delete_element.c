#include<stdio.h>
#include<stdlib.h>
#define for_loop for(int i=0;i<size;i++)
int print(int *x,int size)
{
	for_loop
	{
		printf("%d.%d ",i+1,x[i]);
		printf("\n");
	}
	return 0;
}
int main()
{
	int size,*ptr = NULL;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	ptr = (int *)malloc(size*sizeof(*ptr));
	if(ptr == NULL)
	{
		perror("Error");
		return 4;
	}
	for_loop
	{
		printf("%d.",i+1);
		scanf("%d",&ptr[i]);
	}
	printf("Array before deleting elements : \n");
	print(ptr,size);
	int position = 0;
	printf("Enter the index you want to delete: \n");
	scanf("%d",&position);
	for(int i=position-1;i<size;i++)
	{
		ptr[i]= ptr[i+1];
	}
	printf("Array elements after deleting elements :  \n");
	print(ptr,size);
	free(ptr);
	return 0;
}


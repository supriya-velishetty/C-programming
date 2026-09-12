#include<stdio.h>
#include<stdlib.h>
int print(int *x,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d.%d ",i+1,x[i]);
		printf("\n");
	}
	return 0;
}
int main()
{
	int size,*ptr = NULL,i,*qtr = NULL;
	printf("Enter the size of array:");
	scanf("%d",&size);
	ptr = (int *)malloc(size*sizeof(int));
	qtr = (int *)calloc(size,sizeof(int));
	if(ptr == NULL || qtr == NULL)
	{
		perror("Error");
		return 0;
	}
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d.",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<size;i++)
	{
		qtr[i] = ptr[i];
	}
	printf("First array content: \n");
	print(ptr,size);
	printf("\n");
	printf("Copy array is :\n");
	qtr[3]=77;
	print(qtr,size);
	free(ptr);
	free(qtr);
	return 0;
}

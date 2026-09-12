#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
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
	int size,*ptr = NULL,i=0,j=0;
	printf("enter the size of array:\n");
	scanf("%d",&size);
	ptr = (int *)malloc(size*sizeof(int));
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\n array before sorting in Acsending order:\n");
	print(ptr,size);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
	{
		if(ptr[i]>ptr[j] )
		{
		
			int temp = ptr[i];
			ptr[i] = ptr[j];
			ptr[j] = temp;
		}
	}
	}
	printf("\n array after sorting in ascending order:\n");
	print(ptr,size);
	free(ptr);
	return 0;
}
	


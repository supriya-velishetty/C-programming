#include<stdio.h>
#include<stdlib.h>
#define for_loop for(int i=0;i<size;i++) 
int print(int *ptr,int size)
{
	for_loop
	{
		printf("%d.%d ",i+1,ptr[i]);
		printf("\n");
	}
	return 0;
}
int main()
{
	int size,*ptr = NULL,j=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	ptr =  (int *)malloc(size*sizeof(*ptr));
	if(ptr == NULL)
	{
		perror("Error");
		return 0;
	}
	for_loop
	{
		printf("%d.",i+1);
       		scanf("%d",&ptr[i]);
	}
	printf("before decensing Order: \n");
	print(ptr,size);
	printf("\nAfter the decending order: \n");
	for_loop
	{
		for(j=i+1;j<size;j++)
		{
		if(ptr[i]<ptr[j])
		{
		int temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;
		}
		}
	}	
	print(ptr,size);
	free(ptr);
	return 0;
}

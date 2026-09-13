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
	int size;
	printf("Enter the size of array along with extram element size:\n");
	scanf("%d",&size);
	int ptr[size];
	printf("Enter the array:\n");
	for_loop
	{
		printf("%d.",i+1);
		scanf("%d",&ptr[i]);
	}
	printf("Array before element inserted:\n");
	print(ptr,size);
	int position = 0;
	printf("Enter the position you want to insert at:\n");
	scanf("%d",&position);
	int insert = 0;
	printf("Enter the value you want to insert:\n");
	scanf("%d",&insert);
	int i=0;
	for(i = size-2;i>=position;i--)
	{
		ptr[i+1] = ptr[i];
	}
	ptr[position-1] = insert;
	printf("\n Array elements after inserting element:\n");
	print(ptr,size);
	return 0;
}
		



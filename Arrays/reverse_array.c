#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,i=0;
	printf("enter the size of array: ");
	scanf("%d",&size);
	int *ptr = NULL;
	ptr = (int *)malloc(size*sizeof(int));
	if(ptr == NULL)
{
	perror("Error");
	return 0;
}
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++)
{
	printf("%d.",i+1);
	scanf("%d",&ptr[i]);
}
	int j=0,temp;
	for(i=0,j=size-1;i<=size/2,j>=size/2;i++,j--)
{
	temp = ptr[i];
	ptr[i] = ptr[j];
	ptr[j] = temp;
	continue;
}
printf("\nReverse order is :\n");
	for(i=0;i<size;i++)
{
	printf("%d.%d ",i+1,ptr[i]);
	printf("\n");
}
free(ptr);
return 0;
}

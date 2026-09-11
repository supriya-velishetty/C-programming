#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size,*ptr;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	ptr = (int *)malloc(size*sizeof(int));
	if(ptr == NULL)
	{
		perror("MEmory not allocated ");
		return 0;
	}
	for(int i=0;i<size;i++)
	{
		printf("%d.",i+1);
		scanf("%d",&ptr[i]);
	}
	float sum =0,average =0;
	for(int i=0;i<size;i++)
	{
		sum += ptr[i];
	}
	average = sum/size;
	printf("Sum of array is %f\n",sum);
	printf("Average of array is %f\n",average);
	free(ptr);
	return 0;

}

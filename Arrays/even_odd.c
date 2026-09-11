#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,*ptr;
	printf("Enter the size:\n");
	scanf("%d",&size);
	ptr = (int *)calloc(size,sizeof(int));
	int i;
	if(ptr == NULL)
	{
		perror("Error ");
		return 0;
	}
	printf("Enter the array elements of size %d\n",size);	
	for(i=0;i<size;i++)
	{
		printf("%d,",i+1);
		scanf("%d",&ptr[i]);
	}
	int even =0,odd=0;
	for(i=0;i<size;i++)
	{
		if(ptr[i]%2 == 0)
		{
			even = even + ptr[i];
		}
		else
		{
			odd = odd +ptr[i];
		}
	}
	printf("EVEN sum is %d\n",even);
	printf("ODD sum is %d\n",odd);
	free(ptr);
	return 0;
}

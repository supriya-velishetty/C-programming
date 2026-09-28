#include<stdio.h>
void my_strlen(const char *ptr);
int main()
{
	char ptr[10]="seven";
	printf("Size of ptr is %ld\n",sizeof(ptr));
	my_strlen(ptr);
	return 0;
}
void my_strlen(const char *ptr)
{
	int i=0,count = 0;
	while(ptr[i]!= '\0')
	{
		count++;
		i++;
	}
	printf("The size of string from while loop is %d",count);
	printf("\n");
	int count1 = 0;
	for(i=0;ptr[i]!='\0';i++)
	{
		count1++;
	}
	        printf("The size of string from for loop is %d\n",count1);
		
}

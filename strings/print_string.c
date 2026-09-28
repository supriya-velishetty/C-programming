#include<stdio.h>
void print_string(char *ptr);
int main()
{
	char str[10] = "hello";
	print_string(str);
}
void print_string(char *ptr)
{
	int i = 0;
	while(ptr[i]!= '\0')
	{
		printf("%c ",ptr[i]);
		i++;
	}
	printf("\n");

}

#include<stdio.h>
int my_strcmp(char *dest, char *source)
{
    int i = 0;

    while (dest[i] != '\0' && source[i] != '\0')
    {
        if (dest[i] != source[i])
            return 1;

        i++;
    }

    if (dest[i] == source[i])
        return 0;

    return 1;
}
int main()
{
	char str[100],str1[100];
	printf("Enter the string1 : \n");
	scanf("%[^\n]",str);
	printf("Enter the string2 : \n");
	scanf(" %[^\n]",str1);
	int result = my_strcmp(str,str1);
	if(result == 0)
	{
		printf("Both are same\n");
	}
	else
	{
		printf("Both are not same\n");
	}
	return 0;
}
			

	

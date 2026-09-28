#include<stdio.h>
void my_strcpy( char *str1,const char *str2);
int main()
{
	char str[100],str2[100];
	printf("Enter the string1 :\n");
	scanf("%[^\n]",str);
	printf("Enter the sring2 : \n");
	scanf(" %[^\n]",str2);
	printf("string 1 is %s .......string 2 is %s\n",str,str2);
	my_strcpy(str,str2);
	return 0;
}
void my_strcpy( char *str1,const char *str2)
{
	int i=0;
while(str2[i]!='\0')
{
	str1[i]=str2[i];
	i++;
}
str1[i]='\0';
printf("string 1 is %s ...... string 2 is %s\n",str1,str2);
return ;
}


















		

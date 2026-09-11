#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

#define size 5

int main()
{
    int *r;
    r = calloc(size,sizeof(int));
    if(r == NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d.",i+1);
        scanf("%d",&r[i]);
    }
    int lar=INT_MIN, seclar = INT_MIN;
    int small = INT_MAX,secsmall= INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(r[i]>lar)
	{
		seclar = lar;
		lar = r[i];
	}
	else if(r[i]>seclar && r[i] != lar)
	{
		seclar = r[i];
	}
	if(r[i]<small)
	{
		secsmall = small;
		small = r[i];
	}
	else if(r[i]<secsmall && r[i] != small)
	{
		secsmall = r[i];
	}
    }
    printf("large is %d",lar);
    printf("\n second large is %d\n",seclar);
    printf("\n small %d",small);
    printf("\n second small%d\n",secsmall);
}


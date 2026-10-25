#include<stdio.h>
int main()
{
    int num = 0x25,bit = 3,pos = 5,set,get,clear;

    int mask = ((pos+bit)-1);
    int mask_set = mask << bit;
    int mask_clear = ~(mask << bit);
    int mask_get = num >> bit;
    set = num|mask_set ;
    clear = num & mask_clear;
    get = num & mask_get;
    printf("After setting %d bits from %d postion is %x\n",bit,pos,set);
    printf("After getting %d bits from %d postion is %x\n",bit,pos,get);
    printf("After clearing %d bits from %d postion is %x\n",bit,pos,clear);
    return 0;
}
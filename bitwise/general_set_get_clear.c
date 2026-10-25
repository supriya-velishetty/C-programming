#include<stdio.h>
int main()
{
    unsigned int number;
    scanf("%x",&number);
    int set,get,clear,position,bits;
    scanf("%d",&bits);
    scanf("%d",&position);
    int set_mask = (1<<bits)-1;
    int mask = set_mask <<(position - bits + 1);
    set = number | mask ;
    clear = number & (~mask);
    get = (number >> (position - bits +1)) & set_mask ;
    printf("After setting %d bits from %d pos : %X\n",bits,position,set);
    printf("After clearing %d bits from %d pos : %X\n",bits,position,clear);
    printf("After getting %d bits from %d pos : %X\n",bits,position,get);
}
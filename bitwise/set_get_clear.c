#include <stdio.h>
#define input 0x49
#define bit 4

int main()
{
    int mask_set,mask_clear,mask_get,mask_tog;
    int mask = (1<<bit)-1;
      mask_set = mask;
      mask_clear = ~mask;
      mask_get = mask;
      mask_tog = mask;
      printf("Output after Toggling Last %d bits is %x",bit,input^mask_tog);
      printf("\n Output after Clearing Last %d bits is %x",bit,input&mask_clear);
      printf("\n Output after Setting Last %d bits is %x",bit,input|mask_set);
      printf("\n Output after Getting Last %d bits is %x\n",bit,input&mask_get);
}
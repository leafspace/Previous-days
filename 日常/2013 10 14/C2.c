/* Note:Your choice is C IDE */
/*程序的功能是查找给定范围内[100-999]满足以下条件的整数数对。
条件1是每个整数的各位数字各不相同，且不得为数字0；
条件2是第二个数等于第一个数的两倍。例如123和246就是符合条件的数对。
（结果比较多，不便于列出，只要结果符合要求）
*/
#include "stdio.h"
int pd(int x)
{
   int sj[10]={0},i;
   while(x)
    {
      sj[x%10]++;
      x=x/10;
    }
   if(sj[0]>0)  return 0;
   for(i=0;i<10;i++)
      if(sj[i]>1) return 0;
   return 1;	
}
void main()
{
   int i;
   for(i=100;i<500;i++)
      if(pd(i)&&pd(2*i))
            printf("%3d   %3d\n",i,2*i); 
}
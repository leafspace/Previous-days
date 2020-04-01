/*
   编写程序，其功能是：将随机生成的10个3位正整数，再判断该数是升序数还是降底数，
   并将判断结果显示在屏幕上。升序数是指其各位数字从高位到低位，一个比一个大的整
   数，如134、257、389等均为升序数；降序数则反之。程序中至少包含一个判断某数是
   升序还是降序数的通用（函数）过程。
*/
#include "stdio.h"
#include "stdlib.h"
int pd(int n)
{
  int k,bc,flagsx=1,flagjx=-1;
  bc=n;
  k=n%10;
  n=n/10;
  while(n)
  {
    if(n%10<=k)
       flagjx=0;
    k=n%10;
    n=n/10;	
  }	
  k=bc%10;            
  bc=bc/10; 
  while(bc)
  {
    if(bc%10>=k)
       flagsx=0;
    k=bc%10;
    bc=bc/10;	
  }	
  if(flagjx==-1&&flagsx==1) 
    return 0;
  if(flagsx==1)
    return 1;
  if(flagjx==-1)
         return -1;
}
main()
{
   int sj[10],i,k;
   srand((unsigned)time(NULL)); 
   for(i=0;i<10;i++)
      sj[i]=rand()%900+100;
   for(i=0;i<10;i++)
      printf("%d\t",sj[i]);
   for(i=0;i<10;i++)
      {  k=pd(sj[i]);
         if(k==1)
            printf("%3d为升序数\n",sj[i]);
         if(k==-1)
                 printf("%3d为降序数\n",sj[i]);
         if(k==0)
                 printf("%3d\n",sj[i]);	
      }
}
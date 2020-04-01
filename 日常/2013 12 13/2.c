/*
找出10-1000之间的 由两个不同的数字组成的 回文平方数。
        穷举法（有多少列举多少，逐一判断，输出满足条件的）
*/
#include "stdio.h"
#include "math.h"
int pd(int x)
{
   int s=0,bc=x;
   while(x)
   {
     s=s*10+x%10;
	 x=x/10;   
   }
   return s==bc;
}
int px(int x)
{
   int a[10]={0},i,bz=0;
   while(x)
   {
     a[x%10]++;
	 x=x/10;
   }
   for(i=0;i<10;i++)
	   if(a[i])
		   bz++;
	   return bz>2?0:1;
		    
}
main()
{
   int i;
   for(i=(int)sqrt(10)+1;i<=sqrt(1000);i++)
	   if(pd(i)&&px(i))
		   printf("%3d",i);
}
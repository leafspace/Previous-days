/* Note:Your choice is C IDE */
/*一个正整数被称为奇妙平方数，如果此数的平方与它的逆序数的平方互为逆序数。
例如，12^2=144, 21^2=441,12 与 21 互逆 ,144 与 441 互逆 ,12 就是奇妙平方数。
找出 1-300 以内所有的奇妙平方数。*/
#include "stdio.h"
long nx(long x)
{
  long n=0;
  while(x)
  	{
  	  n=n*10+x%10;
  	  x=x/10;
  	}
  return n;
}
void main()
{
   int i;
   for(i=1;i<=300;i++)
     if(nx((long)i*i)==nx(i)*nx(i)) 
        printf("%4d",i);
}
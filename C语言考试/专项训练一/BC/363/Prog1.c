/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求给定正整数m以内的素数之和。
例如：当m=20时，函数值为77。

------------------------------------------------*/

#include "stdio.h"
    
int fun(int m)
{
  
  /**********Program**********/
  int i,j,flag,sum=0;
  for(i=2;i<m;i++)
  {
     flag=1;
     for(j=2;j<i;j++)
	 {
	    if(!(i%j))
		{
		   flag=0;
		   break;	
		}
	 }
   if(flag)
			sum=sum+i;
  }	  
  return sum;  
  /**********  End  **********/
  
}

main()
{
  int y;
  y=fun(20);
  printf("y=%d\n",y);
  yzj();
  
}

yzj()
{
  FILE *IN,*OUT;
  int iIN,iOUT,i;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..It May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. It May Be Changed");
  }
  for(i=0;i<5;i++)
  {  
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}

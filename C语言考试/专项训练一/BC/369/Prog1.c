/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求一分数序列2/1，3/2，5/3，8/5，13/8，21/13…
      的前n项之和。
说明：每一分数的分母是前两项的分母之和，每一分数的
      分子是前两项的分子之和
例如：求前20项之和的值为32.660259。

------------------------------------------------*/

#include "stdio.h"
        
float fun(int n)
{
  
  /**********Program**********/
  int i,fz[2],fm[2],t;
  float sum=0.0;
  fz[0]=2;
  fz[1]=3;
  fm[0]=1;
  fm[1]=2;
  sum=sum+(float)(fz[0]/fm[0])+(float)fz[1]/fm[1];
  for(i=2;i<n;i++)
  {
   t=fz[0];
   fz[0]=fz[1];
   fz[1]+=t;
   t=fm[0];
   fm[0]=fm[1];
   fm[1]+=t;
   sum=sum+(float)fz[1]/fm[1];
  }
    return sum;
  /**********  End  **********/
  
}

main()
{
  float y;
  y=fun(20);
  printf("y=%f\n",y);
  yzj();
  
}

yzj()
{
  FILE *IN,*OUT;
  int iIN,i;
  float fOUT;
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
    fOUT=fun(iIN);
    fprintf(OUT,"%f\n",fOUT);
  }
  fclose(IN);
  fclose(OUT);
}




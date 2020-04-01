#include "stdio.h"
int pd(double a[],int n)
{
   double dc,db;
   int i, flag=1;
   dc=a[1]-a[0];
   db=a[1]/a[0];
   for(i=2;i<n-1;i++)
    {
      if((a[i]-a[i-1]!=dc)&&(a[i]/a[i-1]!=db)&&flag)  
	          {
			     printf("既不是等差数列也不是等比数列\n");
				 return 0;
		      }
      if(a[i]-a[i-1]!=dc) 
	          {
			      flag=-1; 
				  break;
              }
      if(a[i]/a[i-1]!=db)
	          {
			      flag=0;
				  break;
			  }
    }
  switch(flag)
   {
      case -1:  {printf("是等比数列\n"); return 0;}
	  case  0:  {printf("是等差数列\n"); return 0;}
	  case  1:  {printf("既是等差数列又是等比数列\n"); return 0;}
   } 
}
void main()
{
   double a[100];
   int n=0;
   char c;
   printf("请输入数列的值，输入0结束\n");
   do
    {
       scanf("%lf",&a[n]);
    }while(a[n++]!=0);
   pd(a,n);
   printf("请按任意键加回车键结束");
   getchar(c);scanf("%c",&c);
}




/*
小于0的放在前面，大于0的放在后面
*/
#include "stdio.h"
main()
{
	int a[10]={7,-2,3,14,-5,-6,5,22,-4,8};
	int min=0,max=10-1,t,i;
    while(min<max)
	{
	   if(a[min]>0)
	   {
	     t=a[min];
		 a[min]=a[max];
		 a[max]=t;
		 max--;
	   }
	   else 
		   if(a[min]<0)
			   min++;
	}
    for(i=0;i<10;i++)
	  printf("%3d",a[i]);
}
/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
   int i,j,k=0,bzl,a[13]={0},flag; 
   for(i=0;i<13;i++)
      { 
      	bzl=0;flag=1; 
      	while(flag)
      	  { 
      	  	k++;
            for(j=0;j<13;j++)
      	       if(a[j]==k)  break;
      	    if(j==13)  bzl++;
      	    if(bzl%5==0)  flag=0;
      	  }
      	a[i]=k%13;
      }
   for(i=0;i<13;i++)
       printf("%d\n",a[i]);

}
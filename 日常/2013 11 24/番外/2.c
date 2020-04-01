/*
奇数的放在前面，偶数的放在后面
*/
#include "stdio.h"
main()
{
    int a[10]={10,11,16,14,13,48,56,54,21,89};
	int left=0,right=9,k,t,i;
	while(left<right)
		if(a[left]%2)
			left++;
		else
		{
		   for(k=left;k<right;k++)
		   {
		     t=a[k];
			 a[k]=a[k+1];
			 a[k+1]=t;		   
		   }
		  right--;
		}
    for(i=0;i<10;i++)
		printf("%3d",a[i]);
}
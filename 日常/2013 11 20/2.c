/* 将若干正整数排成圆圈。编写程序，找出拐点元素（所谓拐点元素是指它比左右
相邻元素都大或都小），输出拐点元素的值及位置。程序中应定义一个生成没有重
复元素的的两位随机整数数组的通用过程。*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
void cs(int sj[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
   {
     sj[i]=random(90)+10; 	
     for(j=0;j<i;j++)
       if(sj[j]==sj[i])
         {
           i--;
           break;	
         }
   }
}
main()
{
  int n,sj[100],i,q,h,k=0;
  randomize();
  printf("请输入一个100以内的数:\n");
  do
  {
  	scanf("%d",&n);
  	if(n==0||n>=100)
  	  printf("您的输入有误，请重输：\n");
  }while(n==0||n>=100);
  cs(sj,n);
  for(i=0;i<n;i++)
   {
  	 printf("%5d",sj[i]);
  	 if((i+1)%10==0)
  	    printf("\n");
   }
  for(i=0;i<n;i++)
   { q=(i-1+n)%n;
   	 h=(i+1)%n;
   	 if(sj[i]>sj[q]&&sj[i]>sj[h]||sj[i]<sj[q]&&sj[i]<sj[h])
   	 {
  	     printf("%2d为拐点元素，它的位置为%2d\t",sj[i],i);
  	     k++;
  	     if((k+1)%2==0)
  	         printf("\n");
  	 }
   }
  
}
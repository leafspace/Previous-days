/*
以给定的方式标记出方阵中每一行最小元素的位置。如果某一行有多个数值相等的最小元素，
也要同时标记出来。标记方式为每一行的最小元素为0，其他元素为1。
【编程要求】
     1．输入N值，则随机生成一个N行N列的由两位正整数组成的N阶方阵，并输出，
                同时求出每一行的最小元素并生成标记矩阵输出；
     2．程序中应定义一个求数组某一行的最小元素值的通用过程。
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void cl(int sj[][100],int bz[][100],int n)
{
   int i,j,min;
   printf("产生的数据为：\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
	   {
	     sj[i][j]=rand()%90+10;
         bz[i][j]=1;
		 printf("%5d",sj[i][j]);	   
	   }
       printf("\n");   
   }
   for(i=0;i<n;i++)
   {  
	  min=0;
	  bz[i][min]=0;
      for(j=1;j<n;j++)
	   {
	     if(sj[i][j]<=sj[i][min])
		 {
			   bz[i][j]=0;
			   bz[i][min]=sj[i][j]<sj[i][min]?1:0;
			   min=j;
		 }
			   
	   }
       
   }

   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
		     printf("%5d",bz[i][j]);
	  printf("\n");
   }
		  
}
main()
{
   int n,sj[100][100],bz[100][100];
   srand((unsigned)time(NULL));
   printf("请您输入您要产生的数的行列:\n");
   scanf("%d",&n);
   cl(sj,bz,n);
}
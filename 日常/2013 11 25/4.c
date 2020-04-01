/*以给定的方式标记出方阵中每一行最小元素的位置。如果某一行有多个数值相等的最小元素，
也要同时标记出来。标记方式为每一行的最小元素为0，其他元素为1。
【编程要求】
     1．输入N值，则随机生成一个N行N列的由两位正整数组成的N阶方阵，并输出，同
              时求出每一行的最小元素并生成标记矩阵输出；
     2．程序中应定义一个求数组某一行的最小元素值的通用过程。
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define N 5
main()
{
   int sj[N][N],min[N];
   int i,j;
   printf("产生的数据为：\n");
   srand((unsigned)time(NULL));
   for(i=0;i<N;i++) 
   {
      for(j=0;j<N;j++)
	  {
          sj[i][j]=rand()%90+10;
		  printf("%3d",sj[i][j]);
	  }
	  printf("\n");
   }
   for(i=0;i<N;i++)
   {
      min[i]=0;
	  for(j=1;j<N;j++)
		 if(sj[i][j]<sj[i][min[i]])
			 min[i]=j;
   }
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
		  if(j==min[i])
			   printf("0  ");
		  else 
			   printf("1  ");
   
      printf("\n");
   }




}
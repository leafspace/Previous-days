/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：找出二维整型数组a[4][4]中每行元素的最大值，并将该元
      素移动至该行首列。

编写程序：
      1、编写void findmax(int a[][N], int n[])函数：找出
         二维数组a中每行元素的最大值，并将该元素的列下标
         存入数组n中，即第0行元素最大值的列下标存入n[0]，
         ...，第3行元素最大值的列下标存入n[3]。

      2、编写void move(int a[][N],int n[])函数：根据数组
         n中保存的数据，将a数组中每行最大值元素移动到该
         行首列，要求移动后该元素与该行其他元素的相对位
         置不变。

例如：
      a数组的初始数据为：
         -2  13   6    9
         25   4   0   11
         -8   3  10   16
         4    7   5   20

      经过处理后a数组中数据为：
         13   6   9   -2
         25   4   0   11
         16  -8   3   10
         20   4   7    5

---------------------------------------------------------
注意：请勿改动主函数main()中的任何语句。
-------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define N 4
void findmax(int a[][N], int n[]){
/**********Program**********/
int i,j,max;
for(i=0;i<N;i++)
{
  max=0;
  for(j=1;j<N;j++)
	 if(a[i][j]>a[i][max])
         max=j;
  n[i]=max;
}
/**********  End  **********/
}
void move(int a[][N],int n[]){
/**********Program**********/
 int i,j,t,k;
 for(i=0;i<N;i++)
 {
   k=n[i];
   while(k)
   {
     t=a[i][0];
      for(j=0;j<N-1;j++)
		 a[i][j]=a[i][j+1];
	 a[i][j]=t;
	 k--;
   }
 }

/**********  End  **********/
}

void main(){
  int i,j;
  int a[N][N]={{-2,13,6,9},{25,4,0,11},{-8,3,10,16},{4,7,5,20}},n[4];
  FILE *fp;
  findmax(a,n);
  move(a,n);
  if((fp=fopen("data.txt","w"))==NULL){
    printf("open file error\n");
    exit(0);
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      fprintf(fp,"%d\t",a[i][j]);
      printf("%d\t",a[i][j]);
    }
    fprintf(fp,"\n");
    printf("\n");
  }
  fclose(fp);
}

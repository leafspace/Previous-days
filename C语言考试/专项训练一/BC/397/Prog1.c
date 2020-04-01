/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：编写函数fun用比较法对主程序中用户输入的具有10
      个数据的数组a按由大到小排序，并在主程序中输出
      排序结果。

------------------------------------------------*/

#include "stdio.h"

int fun(int array[], int n)
{
  /**********Program**********/
  int i,j,max,t;
  for(i=0;i<n;i++)
  {
     max=i;
	 for(j=i+1;j<n;j++)
		 if(array[j]>array[max])
			   max=j;
	 t=array[i];
	 array[i]=array[max];
	 array[max]=t; 
  
  }
  /**********  End  **********/
}

main()
{
  int a[10],i;
  printf("请输入数组a中的十个数:\n");
  for (i=0;i<10;i++)
    scanf("%d",&a[i]);
  fun(a,10);
  printf("由大到小的排序结果是:\n");
  for (i=0;i<10;i++)
    printf("%4d",a[i]);
  printf("\n");  
  yzj();
  
}

yzj()
{
  FILE *IN,*OUT;
  int n;
  int i[10];
  int o;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read File Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write File Error");
  }
  for(n=0;n<10;n++)
  {    
    fscanf(IN,"%d",&i[n]);
  }
  fun(i,10);
  for(n=0;n<10;n++)
  {    
    fprintf(OUT,"%d\n",i[n]);
  }
  fclose(IN);
  fclose(OUT);
}


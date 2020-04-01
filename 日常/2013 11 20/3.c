/*
       本程序的功能是：按设定的数据位数N（N=2、3、4、5、6），随机生成20个互不相等正整数，按5个一行的形式输出，然后
从中找出所有降序数输出。所谓降序数是指所有高位数字都大于其低位数字的数。例如973就是一个降序数。程序中应定义一个用于
判断一个N位数是否是降数的通用过程。
*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"
int pd(long n)
{
  int k;
  k=n%10;
  n=n/10;
  while(n)
  {
    if(n%10<=k)
       return 0;
    k=n%10;
    n=n/10;	
  }	
  return 1;	
}
main()
{ 
  int x,i,j;
  long n,sj[20];
  srand((unsigned)time(NULL));
  printf("请输入一个2——6的数：\n");
  do
  {
  	scanf("%d",&x);
  	if(x<2||x>6)
  	  printf("您的输入有误，请重输：\n");
  }while(x<2||x>6);
  for(i=0;i<20;i++)
  {
     sj[i]=rand()%(long)(9*pow(10,x-1))+(long)pow(10,x-1);
     for(j=0;j<i;j++)
       if(sj[j]==sj[i])
          {
            i--;
            break;	
          }
  }
  printf("产生的数为：\n");
  for(i=0;i<20;i++)
  {
     printf("%7d",sj[i]);
     if(!((i+1)%5))
        printf("\n");
  }
  printf("降序数为：\n");
  for(i=0;i<20;i++)
     if(pd(sj[i]))
          printf("%7d\t",sj[i]);
}
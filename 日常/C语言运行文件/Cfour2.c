/*
       本程序的功能是：按设定的数据位数N（N=2、3、4、5、6），随机生成20个互不相等正整数，按5个一行的形式输出，然后
从中找出所有降序数输出。所谓降序数是指所有高位数字都大于其低位数字的数。例如973就是一个降序数。程序中应定义一个用于
判断一个N位数是否是降数的通用过程。
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int panduan(int n)
{
     int i=0,a[6],k;
       while(n!=0)
          {
                a[i++]=n%10;
                n=n/10;
          }
       k=i;
       for(i=1;i<k-1;i++)
          {
                if(a[i]>a[i-1]&&a[i+1]>a[i])    return 1;
                else                            return 0;
          }
}
void main()
{
     int  ws,i,j;
     long int a[20]={0};
     randomize();
     do
        {
           scanf("%d",&ws);
        }while(ws<2||ws>6);
     for(i=0;i<20;i++)
        {  
        	a[i]=random(10/*9*pow(10,ws-1)*/)+pow(10,ws-1);
        	for(j=0;j<i;j++)
        	     while(a[j]==a[i])
        	         {
        	            a[i]=random(10/*9*pow(10,ws-1)*/)+pow(10,ws-1);   	
        	         }
        }
     for(i=0;i<20;i++)
        {
             printf("%4ld",a[i]);
             if((i+1)%10==0)   printf("\n");
        }
     printf("======================================================================");
     for(i=0;i<20;i++)
        {
             if(panduan(a[i]))   printf("%4ld",a[i]);
        }
}
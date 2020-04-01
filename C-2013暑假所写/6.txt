/*
      输入数据位数K【3～5】，编程找出所有由1至9这九个数字(不含0)组成的K位数，且满足从低位到高位的数字依次增大，任意 
  相邻两位数字之差都大于1。程序中应至少定义一个通用过程，用于判断某个K位数是否满足给定条件。
*/
#include<stdio.h>
#include<math.h>
int puanduan(long int n)
{
     int i=0,a[5],k;
     while(n!=0)
        {
            a[i++]=n%10;
            n=n/10;
        }
     k=i;
     for(i=0;i<k;i++)
        {
        	if(a[i]==0)   return 0;
        }
     for(i=1;i<k;i++)
        {   
          if(a[i]<=a[i-1]||(a[i]-a[i-1])<=1)                      return 0;
        }
     return 1;
}
void main()
{
    int k,geshu=1;
    long int i;
    do
      {
          scanf("%d",&k);
      }while(k<3||k>5);
    for(i=pow(10,k-1);i<=pow(10,k)-1;i++)
     {
     	 if(puanduan(i))   
            {
            	geshu++;
            	printf("  %4ld",i);
            }
         if(geshu%10==0)  {
         	               geshu=1;
         	               printf("\n");
                          }
     }
}
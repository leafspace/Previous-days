/*编写程序，求出给定正整数的所有质因子，并将该数表示成质因子(质因子均带有
指数幂)的乘积。例如：342=2^1*3^2*19^1
【编程要求】
1．输入N值，按要求的格式显示结果
2．程序中应定义一个求一个正整数的质因子的通用过程。
*/
#include "stdio.h"
int qyz(int yz[],int n)
{
   int i=2,k=0;
   while(n!=1)
   {
     if(!(n%i))
       {
        yz[k++]=i;
        n=n/i;
        i--; 	
       }
     i++;
   }
   return k;
}
main()
{
    int x,yz[100]={0},n,s=0,i,cs;
    printf("请您输入一个-32768——32767之间的整数:\n");
    do
    {
        scanf("%d",&x);
        if(x<-32768||x>32767)
          printf("您的输入有误，请重输！：\n");
    }while(x<-32768||x>32767);
    n=qyz(yz,x);
    printf("%5d=",x);
    for(i=0;i<n;i++)
      {
        cs=yz[i];
        s++;
        if(i==(n-1))
          {
            printf("%d^%d",cs,s);
            s=0;	
          }
        if(yz[i]!=yz[i+1]&&i<n-1)
        {
           printf("%d^%d+",cs,s);
           s=0;
        }
     } 
}
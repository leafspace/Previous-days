/*
        编写程序，找出所有满足下述条件的n位数（n=2、3、4）：当他们乘以数2、3、4、5、6、7、8、9时，其各位数字之和不变。程序至少要包含一个求某数各位数字之和的通用过程。
*/
#include<stdio.h>
#include<math.h>
int shuzihe(int n)
{
   int s=0;
   while(n!=0)
     {
       s=s+n%10;
       n=n/10;
     }
    return s;
}
void main()
{
    int k,i,dxh,j,f;
     do
         {
              scanf("%d",&k);
         }while(k<2||k>5);
     for(i=pow(10,k-1);i<=pow(10,k)-1;i++)
         {
         	  f=1;
              dxh=shuzihe(i);
              for(j=2;j<=9;j++)
                  {
                      if(dxh!=shuzihe(i*j))   {f=0; break;}
                  }
              if(f)
                  {
                       printf("%4d=====>",i);
                       printf("单项和为：%4d",dxh);
                       for(j=2;j<10;j++)
                         {
                            printf("%8d",i*j);        	
                         	
                         }
                       printf("\n");
                  }
              
           }
}
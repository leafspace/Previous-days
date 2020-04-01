/*    
   编写程序，求积为4056，最小公倍数为312的两个数对。
　　　[程序要求]
      1. 数据相同的两组数组中只取一组，小的数放在前面，大数放在后面；
　　        例如：13、312和312、13只取13、312这一对；
　　　2．编写一个求两个数的最小公倍数的函数过程；
*/
#include<stdio.h>
#include<math.h>
int zxgbs(int a,int b)
{
    int t,i,p;
    if(a>b)
       {
          t=b;
          b=a;
          a=t;
       }
         i=b-1;
     while(i<b&&i>=1)
       {
          if(a%i==0&&b%i==0)
               break;
          i=i-1;
       }
     p=(a*b)/i;
     return p;

}
void main()
{
     int ji,bs,i,j;
     scanf("%d%d",&ji,&bs);
     for(i=1;i<=sqrt(ji);i++)
        {
            j=ji/i;
            if(i*j==ji)   if(zxgbs(i,j)==bs)  printf("\n%4d    %4d",i,j);
        }
}
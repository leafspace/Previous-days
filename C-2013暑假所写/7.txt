/*
    编一程序，其功能是求出所有分母小于7的不可约真分数相乘的积。所有分数按每行5个显示。
　　提示：1.当分数的分子与分母互质时（两个数的最大公约数为1）,这个分数称为不可约分数;当分数的分子小于分母时,这个分
数就成为真分数.
　　　　　2.注意适时对两个分数积进行约分。
*/
#include<stdio.h>
int panduan(int a,int b)
{
    int t,i;
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
     if(i==1)   return 1;
     else       return 0;
}
void main()
{
     double s=1.0;
     int a,b,m[30],n[30],k=0,i,j;
     for(b=1;b<=7;b++)
          {
             for(a=1;a<b;a++)
                  if(panduan(a,b)) 
                           {
                             m[k]=a;
                             n[k++]=b;
                             printf("%d/%d\n",a,b);
                           }   
          }
     for(i=0;i<k;i++)
        for(j=0;j<k;j++)
          {
               if(m[i]==n[j])
                   {
                          m[i]=n[j]=1;    
                   }
          }
      for(i=0;i<k;i++)
          {
                s=s*m[i]/n[i];
          }
     printf("\n分数积为%8lf",s);
}
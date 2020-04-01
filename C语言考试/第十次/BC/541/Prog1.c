/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：主函数main()中一维数组num为测试数据,程序将测试数据
      转换为数字字符串并保存在数组s中，然后将数字字符串s
      转换为货币格式保存到数组t中，最终输出数组t。

编写程序：
      1. 编写函数
      void LongtoStr(long m[],int n,char s[][30])
      将数组m中n个整数转换成数字字符串，保存在数组s中。
    
      2. 编写函数
      void Currency(char s[][30],int n,char M,char t[][30])
      将n个数字字符串s转换为货币格式保存到数组t中并输出，
      M表示货币符号。

例如：
      测试数据:
        12345678,45678,1689
      运行结果：
        num[0]=12345678 is changed as $12,345,678
        num[1]=45678 is changed as $45,678
        num[2]=1689 is changed as $1,689

---------------------------------------------------------
注意：请勿改动主函数main()中的任何语句。
-------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
#define N 10

void LongtoStr(long m[],int n,char s[][30])
{
/**********Program**********/
int i,j,t,k;
for(i=0;i<n;i++)
{  
   k=0;
   t=m[i];
   while(t)
     {
       s[i][k++]=t%10+'0';
       t=t/10;
     }
   s[i][k]=0;
   for(j=0;j<k/2;j++)
     {
       t=s[i][j];   
       s[i][j]=s[i][k-1-j];
       s[i][k-1-j]=t; 
     }
}
/**********  End  **********/
   
}

void Currency(char s[][30],int n,char M,char t[][30])
{
/**********Program**********/
int i,j,CD,tcd,sjcd;
for(i=0;i<n;i++)
{
   CD=strlen(s[i]);
   tcd=0;
   sjcd=0;
   while(sjcd!=CD)
     {
        t[i][0]=s[i][CD-1-sjcd];
        tcd++;
        sjcd++;
        for(j=tcd-1;j>=0;j--)
           t[i][j+1]=t[i][j];
        if(!(sjcd%3))
            {
               t[i][0]=',';
               tcd++;
               for(j=tcd-1;j>=0;j--)
                  t[i][j+1]=t[i][j];
            }
     }
   t[i][0]=M;
   tcd++;
   t[i][tcd]=0;
}
/**********  End  **********/
}

int main()
{
    FILE *fp;
    long int num[N]={12345678,45678,1689};
    char s[N][30],t[N][30];
    int i,n;
    if((fp=fopen("DATA.TXT","w"))==NULL)
    {
        printf("FILE open error.\n");
        exit(0);
    }

    n=3;
    LongtoStr(num,n,s);
    Currency(s,n,'$',t);

    for(i=0;i<n;i++)
    {
        printf("num[%d]=%ld is changed as %s\n",i,num[i],t[i]);
        fprintf(fp,"num[%d]=%ld is changed as %s\n",i,num[i],t[i]);
    }
    fclose(fp);
    
    return 0;
}

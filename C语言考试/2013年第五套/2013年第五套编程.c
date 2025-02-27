/*************************************************************

题目：主函数main()中由数字与字母组成的字符串s为测试数据，程序
      首先从字符串s尾部开始,按逆序把在其中出现的每相邻的两个字
      符，紧随其后重复出现一次，若字符串s中头部有剩余的单个字
      符也重复，生成新的字符串t；然后计算字符串t中数字子串对应
      整数的各位数字之和。

例如: 当s="A48CD06"，则字符串t为"6060DCDC8484AA"，其数字子串对
      应整数的各位数字之和为12和24。

编写程序：
    1. 编写函数void GenStr(char s[],char t[])，按上述规则生成
       字符串，结果保存在字符数组t中。

    2. 编写函数int Calculate(char t[],int b[]),计算字符串t中各
       个数字子串对应整数的各位数字之和，结果保存在整数数组b中，
       函数返回整数个数。

**************************************************************
注意：请勿改动主程序main()中的任何语句。
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define N 80
void  GenStr(char s[],char t[])
{
/**********Program**********/
   int i,k=0;
   char ls[20];
   t[0]=0;
   for(i=strlen(s)-1;i>=0;i--)
      {
         if(i!=0&&((isalpha(s[i])==isalpha(s[i-1]))||(isdigit(s[i])==isdigit(s[i-1]))))   /*未到最前面一个字符并且当前字符与下面要处理的字符属于同一个类型*/
               ls[k++]=s[i];
         if(i!=0&&((isalpha(s[i])!=isalpha(s[i-1]))||(isdigit(s[i])!=isdigit(s[i-1]))))   /*未到最前面一个字符并且当前字符与下面一个要处理的字符不一样*/
               {
                 ls[k++]=s[i];
                 ls[k]=0;
                 strcat(t,ls);
                 strcat(t,ls);
                 k=0;
               }
         if(i==0&&((isalpha(s[i])==isalpha(s[i+1]))||(isdigit(s[i])==isdigit(s[i+1]))))    /*已经到了最前面一个字符并且当前字符同刚刚处理的字符的类型一样*/
               {
                 ls[k++]=s[i];
                 ls[k]=0;
                 strcat(t,ls);
                 strcat(t,ls);
               }
         if(i==0&&((isalpha(s[i])!=isalpha(s[i+1]))||(isdigit(s[i])!=isdigit(s[i+1]))))    /*已经到了最前面一个字符并且当前字符同刚刚处理的字符的类型不一样也就是说这是个新字符*/
               {
                 ls[0]=s[i];
                 ls[1]=0;
                 strcat(t,ls);
                 strcat(t,ls);
               }
      }
/**********  End  **********/
}

int Calculate(char t[],int b[])
{
/**********Program**********/
int i,flag=0,k=0,s=0;
    for(i=0;t[i];i++) 
     {
       if(isdigit(t[i])&&!flag)            /*到达了数字字符开始的时候*/
           {
              s=s+t[i]-'0';
			  if(isalpha(t[i+1]))
				 b[k++]=s; 
           }
	   if(isdigit(t[i])&&flag)                        /*数字字符的中间部分*/
	   {
		   s=s+t[i]-'0';
		   if(isalpha(t[i+1]))
			    b[k++]=s;
	   }
       if(isalpha(t[i]))                   /*假如到了字符需要给下一次做准备*/
	   {
		   flag=0;
		   s=0;
	   }
       if(isdigit(t[i]))                   
	   {
		   flag=1;
	   }
     }
    return k;
/**********  End  **********/
}

int main()
{
    char s[]="A48CD06";
    char t[N];
    int b[N]={0};
    int num=0,i=0;

    FILE *fp;
    if((fp=fopen("DATA.TXT","w"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }

    GenStr(s,t);
    printf("The string t is: %s\n",t);
    fprintf(fp,"The string t is: %s\n",t);

    num= Calculate(t,b);        
    printf("Sum of the digits of each integer is: ");
    fprintf(fp,"Sum of the digits of each integer is: ");
        
    for(i=0;i<num;i++)
    {
        printf("%d ",b[i]);
        fprintf(fp,"%d ",b[i]);
    }

    printf("\n");
    fprintf(fp,"\n");

    fclose(fp);
    getch();
    return 0;
}


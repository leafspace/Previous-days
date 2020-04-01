/*************************************************************

题目：主函数main()中由数字与字母组成的字符串s为测试数据，程序
      主要从字符串数组中找出最长的字符串（如果有多个长度相同且
      为最长的字符串，则约定第一个为最长的字符串）；然后判断最
      长字符串中所包含的数字子串对应整数是否是素数。

例如：字符串s为"123ABC"、"23A48DE89"、"ABC3247"，则最长的字符
      串为"23A48DE89"，其数字子串对应整数为素数的整数为23，89。

编写程序：
    1. 编写函数int MaxStr(char s[][80],int n),查找字符串数组s
       中n个字符串中最长的字符串，函数返回最长字符串所在的数组
       行的行下标。

    2. 编写函数int TestPrime(char s[],int b[]),判断最长字符串s
       中数字子串对应整数是否是素数，不同素数保存在数组b中，函
       数返回素数的个数。

**************************************************************
注意：请勿改动主程序main()中的任何语句。
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define N 80

int  MaxStr(char s[][80],int n)
{
/**********Program**********/
   int i,max=0;
   for(i=1;i<n;i++)
	    if(strlen(s[i])>strlen(s[max]))
			 max=i;
	return max;
/**********  End  **********/
}

int TestPrime(char s[],int b[])
{
/**********Program**********/
/*     判断最长字符串s
       中数字子串对应整数是否是素数，不同素数保存在数组b中，函
       数返回素数的个数。*/
  int i,j,k=0,flag,num=0;
  for(i=0;s[i];i++)
  {  
	 flag=1;
	 if(isdigit(s[i]))
	    num=num*10+s[i]-'0';
     if(isdigit(s[i+1]))
		 continue;
	 else
	 {
     /*判断素数模块*/
	  for(j=2;j<num;j++)
		   if(!(num%j))
			   break;
	  if(j==num)
	  {
	     /*说明是素数，进行下面的操作*/
		  for(j=0;j<k;j++)
			  if(b[j]==num)
				  break;
		  if(j==k)
			  b[k++]=num;	   
	  }
	 /*判断素数模块*/ 
	  num=0;
	 }
  }
  return k;
/*另一种写法*/
/*

	int i=0,j,num,k=0,flag;
	while(s[i])
	{
	   if(isdigit(s[i]))
	   {
	      num=0;
	      while(isdigit(s[i]))
		  {
		     num=num*10+s[i]-'0';
		     i++;
		  }
	      flag=1;
          for(j=2;j<num;j++)
			  if(!(num%j))
			  {
			    flag=0;
				break;
			  }
		  if(flag)
		  {
		     for(j=0;j<k;j++)
				if(num==b[j])
				{
				   flag=0;
				   break;
				}
		  }
		  if(flag)
			  b[k++]=num;
	   }
	  i++;
	}
return k;


*/
/**********  End  **********/
}

int main()
{
    char s[][80]={"123ABC","23A48DE89","ABC3247"};
    int b[N]={0};
    int num=0,n=0,i=0;

    FILE *fp;
    if((fp=fopen("DATA.TXT","w"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }

    n=MaxStr(s,3);
    printf("The max string is: %s\n",s[n]);
    fprintf(fp,"The max string is: %s\n",s[n]);

    num=TestPrime(s[n],b);        
    printf("The prime list is: ");
    fprintf(fp,"The prime list is: ");

    for(i=0;i<num;i++)
    {
        printf("%d  ",b[i]);
        fprintf(fp,"%d  ",b[i]);
    }

    printf("\n");
    fprintf(fp,"\n");

    fclose(fp);
    
    return 0;
}

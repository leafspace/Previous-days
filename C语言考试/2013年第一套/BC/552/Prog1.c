/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：主函数main()中由数字与字母组成的字符串s为测试数据，
      程序主要将字符串s中字符复制到字符数组t中，下标为偶数
      位置上的字母字符复制两次，其余字符复制一次；然后判断
      字符串t中所包含数字子串对应的整数是否是"平方镜反数"。

例如：字符串s为"g12bc32fA31"，按上述规则，则字符串t为
      "gg12bcc32fAA31"。

平方镜反数：
      该数的平方与该数的反序数的平方互为反序数。
      
例如：12的平方等于144，12的反序数21的平方等于441，则12就是
      一个"平方镜反数"。

编写程序：
      1. 编写函数void  GenStr(char s[],char t[]),按上述要求
      生成新的字符串，结果保存在字符数组t中。

      2. 编写函数int TestFanshu(char t[],int b[]),判断字
         符串t中所包含数字子串对应的整数是否是平方镜反数，
         将平方镜反数保存在数组b中，函数返回平方镜反数的
         个数。

---------------------------------------------------------
注意：请勿改动主函数main()中的任何语句。
-------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define N 80

void  GenStr(char s[],char t[])
{
/**********Program**********/
int i,j,k=0;
for(i=0;s[i];i++)
{
    if(!(i%2)&&((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
	   for(j=0;j<2;j++)
		   t[k++]=s[i];
	else 
	   t[k++]=s[i];
}
t[k]=0;
/**********  End  **********/
}

int TestFanshu(char t[],int b[])
{
/**********Program**********/
int k=0,sz,bc,nx,i;
for(i=0;t[i];i++)
{  
	if(!(t[i]>='0'&&t[i]<='9'))
	{
	   sz=0;
	   nx=0;
	}
   if(t[i]>='0'&&t[i]<='9')
   {
      sz=sz*10+t[i]-'0';
   }
   if((t[i]>='0'&&t[i]<='9')&&(t[i+1]<'0'||t[i+1]>'9'))
   {
     bc=sz;
	 while(bc)
	 {
	    nx=nx*10+bc%10;
		bc=bc/10;
	 }
	 nx=nx*nx;
	 bc=0;
     while(nx)
	 {
	    bc=bc*10+nx%10;
		nx=nx/10;
	 }
     if(sz*sz==bc)
	 {
	    b[k++]=sz;
	 }
   }
}
return k;
/**********  End  **********/
}

int main()
{
    char s[]="g12bc32fA31";
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

    num=TestFanshu(t,b);
    printf("The pingfangjingfanshu is: ");
    fprintf(fp,"The pingfangjingfanshu is: ");

    for(i=0;i<num;i++)
    {
        printf("%d ",b[i]);
        fprintf(fp,"%d ",b[i]);
    }
    printf("\n");
    fprintf(fp,"\n");

    fclose(fp);
    
    return 0;
}

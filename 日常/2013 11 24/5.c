/*
纯英文的文本文件ywzfc.txt。以下程序用字符串S1替换文件中所有字符子串S，
字符串S不区分字母大小写，S1与S长度不一定相同。文件ywzfc.Txt的内容如下，
其中VB、Vb，vB,vb都要求用VisualBasic替换。
This a VB book
We study vb
Vb is very useful
Hello VB
*/
#include "stdio.h"
#include "string.h"
int find(char k[],char s[])
{
   int i,j;
   int kcd,scd;
   kcd=strlen(k);          
   scd=strlen(s);               
   for(i=0;i<=kcd-scd;i++)
      {
         j=0;                                         
		 while((s[j]==k[i+j]||tolower(s[j])==k[i+j])&&s[j]) 
			 j++;
		 if(!s[j])
               return i;     	
      }	
	return -1;	
}
main()
{
   char ch[4][80];	
   char s1[80],s[80];
   int i,wz,s1cd,scd,yscd,j;
   printf("请输入数据文件：\n");
   for(i=0;i<4;i++)
      gets(ch[i]);
   printf("请输入您要查找的字符串：\n");
   gets(s);   
   printf("请输入您要替换的字符串：\n");
   gets(s1); 
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   printf("您输入的字符串为：\n");
   for(i=0;i<4;i++)
      puts(ch[i]);
   printf("您输入的查找字符串为：\n");
   puts(s);
   printf("您输入的替换字符串为：\n");
   puts(s1);
   for(i=0;i<4;i++)
   {  
	  scd=strlen(s);
      s1cd=strlen(s1);
      yscd=strlen(ch[i]);                                           
      wz=find(ch[i],s);           
      if(wz!=-1)
	  {                                                     
	    while(scd--)
		{
           for(j=wz;j<yscd;j++)
               ch[i][j]=ch[i][j+1];
           yscd--;
		}                                             
	    for(j=strlen(ch[i]);j>=wz;j--)
            ch[i][j+s1cd]=ch[i][j];

	    for(j=0;j<s1cd;j++)
           ch[i][wz+j]=s1[j];
	  }
   
   }
   printf("处理后为：\n");
   for(i=0;i<4;i++)
      puts(ch[i]);   





}
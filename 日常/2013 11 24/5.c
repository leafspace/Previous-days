/*
��Ӣ�ĵ��ı��ļ�ywzfc.txt�����³������ַ���S1�滻�ļ��������ַ��Ӵ�S��
�ַ���S��������ĸ��Сд��S1��S���Ȳ�һ����ͬ���ļ�ywzfc.Txt���������£�
����VB��Vb��vB,vb��Ҫ����VisualBasic�滻��
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
   printf("�����������ļ���\n");
   for(i=0;i<4;i++)
      gets(ch[i]);
   printf("��������Ҫ���ҵ��ַ�����\n");
   gets(s);   
   printf("��������Ҫ�滻���ַ�����\n");
   gets(s1); 
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   printf("��������ַ���Ϊ��\n");
   for(i=0;i<4;i++)
      puts(ch[i]);
   printf("������Ĳ����ַ���Ϊ��\n");
   puts(s);
   printf("��������滻�ַ���Ϊ��\n");
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
   printf("�����Ϊ��\n");
   for(i=0;i<4;i++)
      puts(ch[i]);   





}
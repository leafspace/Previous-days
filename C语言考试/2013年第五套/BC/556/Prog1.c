/*************************************************************

��Ŀ��������main()������������ĸ��ɵ��ַ���sΪ�������ݣ�����
      ���ȴ��ַ���sβ����ʼ,������������г��ֵ�ÿ���ڵ�������
      ������������ظ�����һ�Σ����ַ���s��ͷ����ʣ��ĵ�����
      ��Ҳ�ظ��������µ��ַ���t��Ȼ������ַ���t�������Ӵ���Ӧ
      �����ĸ�λ����֮�͡�

����: ��s="A48CD06"�����ַ���tΪ"6060DCDC8484AA"���������Ӵ���
      Ӧ�����ĸ�λ����֮��Ϊ12��24��

��д����
    1. ��д����void GenStr(char s[],char t[])����������������
       �ַ���������������ַ�����t�С�

    2. ��д����int Calculate(char t[],int b[]),�����ַ���t�и�
       �������Ӵ���Ӧ�����ĸ�λ����֮�ͣ������������������b�У�
       ������������������

**************************************************************
ע�⣺����Ķ�������main()�е��κ���䡣
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
         if(i!=0&&((isalpha(s[i])==isalpha(s[i-1]))||(isdigit(s[i])==isdigit(s[i-1]))))   /*δ����ǰ��һ���ַ����ҵ�ǰ�ַ�������Ҫ������ַ�����ͬһ������*/
               ls[k++]=s[i];
         if(i!=0&&((isalpha(s[i])!=isalpha(s[i-1]))||(isdigit(s[i])!=isdigit(s[i-1]))))   /*δ����ǰ��һ���ַ����ҵ�ǰ�ַ�������һ��Ҫ������ַ���һ��*/
               {
                 ls[k++]=s[i];
                 ls[k]=0;
                 strcat(t,ls);
                 strcat(t,ls);
                 k=0;
               }
         if(i==0&&((isalpha(s[i])==isalpha(s[i+1]))||(isdigit(s[i])==isdigit(s[i+1]))))    /*�Ѿ�������ǰ��һ���ַ����ҵ�ǰ�ַ�ͬ�ոմ�����ַ�������һ��*/
               {
                 ls[k++]=s[i];
                 ls[k]=0;
                 strcat(t,ls);
                 strcat(t,ls);
               }
         if(i==0&&((isalpha(s[i])!=isalpha(s[i+1]))||(isdigit(s[i])!=isdigit(s[i+1]))))    /*�Ѿ�������ǰ��һ���ַ����ҵ�ǰ�ַ�ͬ�ոմ�����ַ������Ͳ�һ��Ҳ����˵���Ǹ����ַ�*/
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
       if(isdigit(t[i])&&!flag)            /*�����������ַ���ʼ��ʱ��*/
           {
              s=s+t[i]-'0';
			  if(isalpha(t[i+1]))
				 b[k++]=s; 
           }
	   if(isdigit(t[i])&&flag)                        /*�����ַ����м䲿��*/
	   {
		   s=s+t[i]-'0';
		   if(isalpha(t[i+1]))
			    b[k++]=s;
	   }
       if(isalpha(t[i]))                   /*���絽���ַ���Ҫ����һ����׼��*/
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
    
    return 0;
}

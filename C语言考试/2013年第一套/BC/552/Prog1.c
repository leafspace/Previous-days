/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ��������main()������������ĸ��ɵ��ַ���sΪ�������ݣ�
      ������Ҫ���ַ���s���ַ����Ƶ��ַ�����t�У��±�Ϊż��
      λ���ϵ���ĸ�ַ��������Σ������ַ�����һ�Σ�Ȼ���ж�
      �ַ���t�������������Ӵ���Ӧ�������Ƿ���"ƽ��������"��

���磺�ַ���sΪ"g12bc32fA31"���������������ַ���tΪ
      "gg12bcc32fAA31"��

ƽ����������
      ������ƽ��������ķ�������ƽ����Ϊ��������
      
���磺12��ƽ������144��12�ķ�����21��ƽ������441����12����
      һ��"ƽ��������"��

��д����
      1. ��д����void  GenStr(char s[],char t[]),������Ҫ��
      �����µ��ַ���������������ַ�����t�С�

      2. ��д����int TestFanshu(char t[],int b[]),�ж���
         ����t�������������Ӵ���Ӧ�������Ƿ���ƽ����������
         ��ƽ������������������b�У���������ƽ����������
         ������

---------------------------------------------------------
ע�⣺����Ķ�������main()�е��κ���䡣
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

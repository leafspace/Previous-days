/*************************************************************

��Ŀ��������main()������������ĸ��ɵ��ַ���sΪ�������ݣ�����
      ��Ҫ���ַ����������ҳ�����ַ���������ж��������ͬ��
      Ϊ����ַ�������Լ����һ��Ϊ����ַ�������Ȼ���ж���
      ���ַ������������������Ӵ���Ӧ�����Ƿ���������

���磺�ַ���sΪ"123ABC"��"23A48DE89"��"ABC3247"��������ַ�
      ��Ϊ"23A48DE89"���������Ӵ���Ӧ����Ϊ����������Ϊ23��89��

��д����
    1. ��д����int MaxStr(char s[][80],int n),�����ַ�������s
       ��n���ַ���������ַ���������������ַ������ڵ�����
       �е����±ꡣ

    2. ��д����int TestPrime(char s[],int b[]),�ж���ַ���s
       �������Ӵ���Ӧ�����Ƿ�����������ͬ��������������b�У���
       �����������ĸ�����

**************************************************************
ע�⣺����Ķ�������main()�е��κ���䡣
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
/*     �ж���ַ���s
       �������Ӵ���Ӧ�����Ƿ�����������ͬ��������������b�У���
       �����������ĸ�����*/
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
     /*�ж�����ģ��*/
	  for(j=2;j<num;j++)
		   if(!(num%j))
			   break;
	  if(j==num)
	  {
	     /*˵������������������Ĳ���*/
		  for(j=0;j<k;j++)
			  if(b[j]==num)
				  break;
		  if(j==k)
			  b[k++]=num;	   
	  }
	 /*�ж�����ģ��*/ 
	  num=0;
	 }
  }
  return k;
/*��һ��д��*/
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

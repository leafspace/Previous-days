/*
��д���򣬽������Ķ���������ת��Ϊʮ������������
������Ӧ����һ������������ת��Ϊʮ����������ͨ�ù��̡�
*/
#include "stdio.h"
#include "string.h"
void zh(char sj[],char h[])
{
    char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int s=0;
	int i,k=0,t;
	for(i=0;sj[i];i++)
	{
	   s=s*2+sj[i]-'0';
		  if((i+1)%4==0)
		  {
		      h[k++]=a[s%16];
		      s=0;
		  }
	}
    for(i=0;i<k/2;i++)
	{
	   t=h[i];
	   h[i]=h[k-i];
	   h[k-i]=t;	
	}
	h[k]='\0';
}
main()
{
   char sj[80],h[20];
   gets(sj);
   puts(h);

}
/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ����ַ�����ɾ��ָ�����ַ���ͬһ��ĸ�Ĵ�Сд
      ����ͬ�ַ�����
���磺������ִ��ʱ�����ַ���Ϊ��turbocandborlandc++
      �Ӽ����������ַ���n����������Ϊ��turbocadbo
      rladc++�����������ַ����ַ����в����ڣ�����
      ������ԭ������� 

------------------------------------------------*/

#include "stdio.h"
  
int fun(char s[],int c)
{
  /**********Program**********/  
  /*
  int cd=0,i,j;                                    ��д
  while(s[cd++]);
  for(i=0;i<cd;i++)
	  if(s[i]==c)
	  {                     
	    for(j=i;j<(cd-1);j++)
			s[j]=s[j+1];
	    cd--;
	  }
  s[cd]=0;  
  return cd;                                      ��д
  */                                       
  /**********  End  **********/  
  int i=0,k=0;
  while(s[i])
    {
      if(s[i]!=c)
          s[k++]=s[i];	
      i++;   	
    }
   s[k]='\0';
   return k;
}     
main()     
{     
  static char str[]="turbocandborlandc++";
  char ch;     
       
  printf("ԭʼ�ַ���:%s\n", str);     
  printf("����һ���ַ�:");     
  scanf("%c",&ch);     
  fun(str,ch);     
  printf("str[]=%s\n",str);
  
  yzj();     
} 

yzj()
{
  FILE *IN,*OUT;
  char i[200];
  char o[200];
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read File Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write File Error");
  }
  fscanf(IN,"%s",i);
  fun(i,'n');
  fprintf(OUT,"%s",i);
  fclose(IN);
  fclose(OUT);
}


/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：从字符串中删除指定的字符。同一字母的大、小写
      按不同字符处理。
例如：若程序执行时输入字符串为：turbocandborlandc++
      从键盘上输入字符：n，则输出后变为：turbocadbo
      rladc++，如果输入的字符在字符串中不存在，则字
      符串照原样输出。 

------------------------------------------------*/

#include "stdio.h"
  
int fun(char s[],int c)
{
  /**********Program**********/  
  /*
  int cd=0,i,j;                                    自写
  while(s[cd++]);
  for(i=0;i<cd;i++)
	  if(s[i]==c)
	  {                     
	    for(j=i;j<(cd-1);j++)
			s[j]=s[j+1];
	    cd--;
	  }
  s[cd]=0;  
  return cd;                                      自写
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
       
  printf("原始字符串:%s\n", str);     
  printf("输入一个字符:");     
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


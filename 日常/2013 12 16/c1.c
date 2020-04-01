/*
 判断是否为C语言关键字
*/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void print(char name[][255],int valid[])
{
   int i;
   for(i=0;i<5;i++)
   {
	  if(valid[i])
	  {
	   printf("%s",name[i]);
	   printf("是");
	  }
	  else
	  {
	   printf("%s",name[i]);
	   printf("不是");
	  }
	  printf("\n");
   }
}
void check(char key[][255],char name[][255],int valid[])
{
    int i,j;
	for(i=0;i<5;i++)
	{
	   valid[i]=0;
	   for(j=0;j<10;j++)
		   if(strcmp(key[j],name[i])==0)
		   {
		      valid[i]=1;
			  break;
		   }
	}
}
main()
{
	char key[10][255]={{"break"},{"char"},{"while"},{"int"},{"for"},{"return"},{"long"},{"continue"},{"if"},{"switch"}};
    char id[5][255]={{"while"},{"Int"},{"FOR"},{"main"},{"switch"}};
	int valid[5];
	check(key,id,valid);
	print(id,valid);
}
/* Note:Your choice is C IDE */
/*��дһ���������ú�������ͳ��һ������Ϊ3���ַ�������һ���ַ����г��ֵĴ�����
���磬������ַ���Ϊasd asasdfg asd as zx67 asd mklo�����ַ���Ϊasd����Ӧ���4��
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
int fun(char s[],char s1[])
{
   int a,b,i,n=0,k,j,flag;
   a=strlen(s);
   b=strlen(s1);
   for(i=0;i<=a-b;i++)
   { 
   	 flag=1;
   	 k=i;
     if(s[k]==s1[0])
      {printf("%d\n",i);
      	for(j=1;j<b;j++)
           if(s1[j]!=s[k++])
           {
              flag=0;
              break;
           }
      }
     if(flag) n++;
   }
   return n;
}
main()
{
  char s[81]= "asd asasdfg asd as zx67 asd mklo",s1[4]= "asd";
  int n;
  n=fun(s,s1);
  printf("n=%d\n",n);
}

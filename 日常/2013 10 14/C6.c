/* Note:Your choice is C IDE */
/*�Ӽ�������ʮ���������������Ӧ��ʮ��������*/
#include "stdio.h"
#include "math.h"
#include "string.h"
void main()
{
  char ch[100],cha;
  double s=0;
  int i;
  printf("������16��������\n");cha=getchar();
  gets(ch);
  for(i=0;ch[i];i++)
   if(tolower(ch[i])-97>15) 
      {
         printf("error!!");	
         exit(0);
      }
  for(i=0;ch[i];i++)
    s=s+pow(tolower(ch[i])-65,i);
  printf("%lf",s);
   
}
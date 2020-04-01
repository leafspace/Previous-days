/* Note:Your choice is C IDE */
/*从键盘输入十六进制数，输出对应的十进制数：*/
#include "stdio.h"
#include "math.h"
#include "string.h"
void main()
{
  char ch[100],cha;
  double s=0;
  int i;
  printf("请输入16进制数：\n");cha=getchar();
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
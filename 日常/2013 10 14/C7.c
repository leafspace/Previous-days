/* Note:Your choice is C IDE */
/*��������Ĺ����ǽ�δ���ַ���s1�г��֣������ַ���s2�г��ֵ��ַ���
�γ�һ���µ��ַ�������s�У�s���ַ���ԭ�ַ������ַ�˳�����򣬵�ȥ
���ظ��ַ���
���磬��s1="12345"��s2="24677"ʱ��s�е��ַ�Ϊ��"67"��
*/
#include <stdio.h>
#include <string.h>
void fun(char s1[],char s2[],char s[])
{
   int i,j,n=0,flag;
   for(j=0;s2[j];j++)
    {
      flag=1;
      for(i=0;s1[i];i++)
         if(s2[j]==s1[i])
           {
           	flag=0;
           	break;
           }
      if(n==0&&flag)
       s[n++]=s2[j];
      else if(flag&&s2[j]!=s[n-1]) 
         s[n++]=s2[j];
    }
   s[n]='\0';
}
main()
{
  char s1[100] ="12345",s2[100] ="24677",s[100];
  fun(s1,s2,s);
  printf("The result is: %s\n",s);
}
/* Note:Your choice is C IDE */
/*给定程序的功能是将未在字符串s1中出现，而在字符串s2中出现的字符，
形成一个新的字符串放在s中，s中字符按原字符串中字符顺序排序，但去
掉重复字符。
例如，当s1="12345"，s2="24677"时，s中的字符为："67"。
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
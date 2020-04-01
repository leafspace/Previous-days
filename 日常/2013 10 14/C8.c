/* Note:Your choice is C IDE */
/*假定输入的字符串中只包含字母和"#"号，请编写函数fun，它的功能是：
使字符串的前导"#"号不得多于m个；若多于m个，则删除多余的"#"号；若
少于或等于m个，则什么也不做，字符串中间和尾部的"#"号不删除。
例如，若字符串中的内容为"####adfb##dfs####"，设m的值为2，删除后，
字符串中的内容则应当是"##adfb##dfs####"；若m的值为4，则字符串中的
内容仍为"####adfb##dfs####"。m的值在主函数中输入。在编写函数时，不
得使用C语言提供的字符串函数。
*/
#include <stdio.h>
#include <conio.h>
void fun(char s[],int m)
{
  int i=0,j;
  while(s[i]=='#'&&m)
    {
    	for(j=1;s[j];j++)
    	  s[j-1]=s[j];
    	s[j]='\0';
    	m--;
    }


}
main()
{  
  char str[100]="######asdf##dfs###dsfs";
  int m;
  printf("Enter m: ");
  scanf ("%d",&m);
  fun(str,m);
  printf("The string after deleted:\n");
  puts(str);
}

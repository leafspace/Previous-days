/* Note:Your choice is C IDE */
/*�ٶ�������ַ�����ֻ������ĸ��"#"�ţ����д����fun�����Ĺ����ǣ�
ʹ�ַ�����ǰ��"#"�Ų��ö���m����������m������ɾ�������"#"�ţ���
���ڻ����m������ʲôҲ�������ַ����м��β����"#"�Ų�ɾ����
���磬���ַ����е�����Ϊ"####adfb##dfs####"����m��ֵΪ2��ɾ����
�ַ����е�������Ӧ����"##adfb##dfs####"����m��ֵΪ4�����ַ����е�
������Ϊ"####adfb##dfs####"��m��ֵ�������������롣�ڱ�д����ʱ����
��ʹ��C�����ṩ���ַ���������
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

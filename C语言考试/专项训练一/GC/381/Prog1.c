/*------------------------------------------------------    
������Ĵ�
--------------------------------------------------------

���ܣ�����һ��Ӣ���ı��У�������ÿ�����ʵĵ�һ����ĸ�ĳ�
      ��д��Ȼ��������ı��� ������ġ����ʡ���ָ�ɿո�
      �������ַ�������
���磺�����룺��I am a student to take the examination.����
      ��Ӧ�������I Am A Student To Take The Examination.����

------------------------------------------------------*/

#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**********FOUND**********/
upfst ( char *p )
{
  int k=0;
  /**********FOUND**********/
  for ( ; *p; p++ )
    if ( k )
    {
      if ( *p == ' ') k = 0;
    }
    /**********FOUND**********/
    else if ( *p != ' ' )
    {
      k = 1;
      *p = toupper( *p );
    }
}
 
main( )
{
  char chrstr[81];
  
  printf( "\nPlease enter an English text line: " );
  gets( chrstr );
  printf( "\n\nBefore changing:\n %s", chrstr );
  upfst( chrstr );
  printf( "\nAfter changing:\n %s\n", chrstr );
}



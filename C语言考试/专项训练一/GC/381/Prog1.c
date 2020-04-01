/*------------------------------------------------------    
【程序改错】
--------------------------------------------------------

功能：读入一个英文文本行，将其中每个单词的第一个字母改成
      大写，然后输出此文本行 （这里的“单词”是指由空格
      隔开的字符串）。
例如：若输入：“I am a student to take the examination.”，
      则应输出：“I Am A Student To Take The Examination.”。

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



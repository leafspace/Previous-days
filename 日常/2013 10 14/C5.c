/* Note:Your choice is C IDE */
/*һ������������Ϊ����ƽ���������������ƽ����������������ƽ����Ϊ��������
���磬12^2=144, 21^2=441,12 �� 21 ���� ,144 �� 441 ���� ,12 ��������ƽ������
�ҳ� 1-300 �������е�����ƽ������*/
#include "stdio.h"
long nx(long x)
{
  long n=0;
  while(x)
  	{
  	  n=n*10+x%10;
  	  x=x/10;
  	}
  return n;
}
void main()
{
   int i;
   for(i=1;i<=300;i++)
     if(nx((long)i*i)==nx(i)*nx(i)) 
        printf("%4d",i);
}
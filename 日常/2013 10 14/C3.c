/*����Ĺ��������1-500֮���������������һ������������ƽ�������ұߡ�
�� 5  6   25  76�ȣ����1000���ڵ�������������*/
#include"stdio.h"
int pd(int x)
{
  long y;
  y=x*x;
  if(y<10);	
  else if(y<100)
          y=y%10;
       else if(y<10000)
               y=y%100;
            else if(y<1000000)
                    y=y%1000;
  if(x==y)  return 1;
  else return 0;
}
main()
{
   int i;
   for(i=1;i<500;i++)
     if(pd(i))  printf("%2d*%2d=%ld\n",i,i,(long)i*i);	
}
/*
       ������Ĺ����ǣ����趨������λ��N��N=2��3��4��5��6�����������20�������������������5��һ�е���ʽ�����Ȼ��
�����ҳ����н������������ν��������ָ���и�λ���ֶ��������λ���ֵ���������973����һ����������������Ӧ����һ������
�ж�һ��Nλ���Ƿ��ǽ�����ͨ�ù��̡�
*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"
int pd(long n)
{
  int k;
  k=n%10;
  n=n/10;
  while(n)
  {
    if(n%10<=k)
       return 0;
    k=n%10;
    n=n/10;	
  }	
  return 1;	
}
main()
{ 
  int x,i,j;
  long n,sj[20];
  srand((unsigned)time(NULL));
  printf("������һ��2����6������\n");
  do
  {
  	scanf("%d",&x);
  	if(x<2||x>6)
  	  printf("�����������������䣺\n");
  }while(x<2||x>6);
  for(i=0;i<20;i++)
  {
     sj[i]=rand()%(long)(9*pow(10,x-1))+(long)pow(10,x-1);
     for(j=0;j<i;j++)
       if(sj[j]==sj[i])
          {
            i--;
            break;	
          }
  }
  printf("��������Ϊ��\n");
  for(i=0;i<20;i++)
  {
     printf("%7d",sj[i]);
     if(!((i+1)%5))
        printf("\n");
  }
  printf("������Ϊ��\n");
  for(i=0;i<20;i++)
     if(pd(sj[i]))
          printf("%7d\t",sj[i]);
}
/*
   ��д�����书���ǣ���������ɵ�10��3λ�����������жϸ��������������ǽ�������
   �����жϽ����ʾ����Ļ�ϡ���������ָ���λ���ִӸ�λ����λ��һ����һ�������
   ������134��257��389�Ⱦ�Ϊ����������������֮�����������ٰ���һ���ж�ĳ����
   �����ǽ�������ͨ�ã����������̡�
*/
#include "stdio.h"
#include "stdlib.h"
int pd(int n)
{
  int k,bc,flagsx=1,flagjx=-1;
  bc=n;
  k=n%10;
  n=n/10;
  while(n)
  {
    if(n%10<=k)
       flagjx=0;
    k=n%10;
    n=n/10;	
  }	
  k=bc%10;            
  bc=bc/10; 
  while(bc)
  {
    if(bc%10>=k)
       flagsx=0;
    k=bc%10;
    bc=bc/10;	
  }	
  if(flagjx==-1&&flagsx==1) 
    return 0;
  if(flagsx==1)
    return 1;
  if(flagjx==-1)
         return -1;
}
main()
{
   int sj[10],i,k;
   srand((unsigned)time(NULL)); 
   for(i=0;i<10;i++)
      sj[i]=rand()%900+100;
   for(i=0;i<10;i++)
      printf("%d\t",sj[i]);
   for(i=0;i<10;i++)
      {  k=pd(sj[i]);
         if(k==1)
            printf("%3dΪ������\n",sj[i]);
         if(k==-1)
                 printf("%3dΪ������\n",sj[i]);
         if(k==0)
                 printf("%3d\n",sj[i]);	
      }
}
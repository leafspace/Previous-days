/* �������������ų�ԲȦ����д�����ҳ��յ�Ԫ�أ���ν�յ�Ԫ����ָ��������
����Ԫ�ض����С��������յ�Ԫ�ص�ֵ��λ�á�������Ӧ����һ������û����
��Ԫ�صĵ���λ������������ͨ�ù��̡�*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
void cs(int sj[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
   {
     sj[i]=random(90)+10; 	
     for(j=0;j<i;j++)
       if(sj[j]==sj[i])
         {
           i--;
           break;	
         }
   }
}
main()
{
  int n,sj[100],i,q,h,k=0;
  randomize();
  printf("������һ��100���ڵ���:\n");
  do
  {
  	scanf("%d",&n);
  	if(n==0||n>=100)
  	  printf("�����������������䣺\n");
  }while(n==0||n>=100);
  cs(sj,n);
  for(i=0;i<n;i++)
   {
  	 printf("%5d",sj[i]);
  	 if((i+1)%10==0)
  	    printf("\n");
   }
  for(i=0;i<n;i++)
   { q=(i-1+n)%n;
   	 h=(i+1)%n;
   	 if(sj[i]>sj[q]&&sj[i]>sj[h]||sj[i]<sj[q]&&sj[i]<sj[h])
   	 {
  	     printf("%2dΪ�յ�Ԫ�أ�����λ��Ϊ%2d\t",sj[i],i);
  	     k++;
  	     if((k+1)%2==0)
  	         printf("\n");
  	 }
   }
  
}
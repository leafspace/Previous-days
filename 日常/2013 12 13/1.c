/*
�Ը����ķ�ʽ��ǳ�������ÿһ����СԪ�ص�λ�á����ĳһ���ж����ֵ��ȵ���СԪ�أ�
ҲҪͬʱ��ǳ�������Ƿ�ʽΪÿһ�е���СԪ��Ϊ0������Ԫ��Ϊ1��
�����Ҫ��
     1������Nֵ�����������һ��N��N�е�����λ��������ɵ�N�׷��󣬲������
                ͬʱ���ÿһ�е���СԪ�ز����ɱ�Ǿ��������
     2��������Ӧ����һ��������ĳһ�е���СԪ��ֵ��ͨ�ù��̡�
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void cl(int sj[][100],int bz[][100],int n)
{
   int i,j,min;
   printf("����������Ϊ��\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
	   {
	     sj[i][j]=rand()%90+10;
         bz[i][j]=1;
		 printf("%5d",sj[i][j]);	   
	   }
       printf("\n");   
   }
   for(i=0;i<n;i++)
   {  
	  min=0;
	  bz[i][min]=0;
      for(j=1;j<n;j++)
	   {
	     if(sj[i][j]<=sj[i][min])
		 {
			   bz[i][j]=0;
			   bz[i][min]=sj[i][j]<sj[i][min]?1:0;
			   min=j;
		 }
			   
	   }
       
   }

   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
		     printf("%5d",bz[i][j]);
	  printf("\n");
   }
		  
}
main()
{
   int n,sj[100][100],bz[100][100];
   srand((unsigned)time(NULL));
   printf("����������Ҫ��������������:\n");
   scanf("%d",&n);
   cl(sj,bz,n);
}
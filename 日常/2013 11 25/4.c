/*�Ը����ķ�ʽ��ǳ�������ÿһ����СԪ�ص�λ�á����ĳһ���ж����ֵ��ȵ���СԪ�أ�
ҲҪͬʱ��ǳ�������Ƿ�ʽΪÿһ�е���СԪ��Ϊ0������Ԫ��Ϊ1��
�����Ҫ��
     1������Nֵ�����������һ��N��N�е�����λ��������ɵ�N�׷��󣬲������ͬ
              ʱ���ÿһ�е���СԪ�ز����ɱ�Ǿ��������
     2��������Ӧ����һ��������ĳһ�е���СԪ��ֵ��ͨ�ù��̡�
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define N 5
main()
{
   int sj[N][N],min[N];
   int i,j;
   printf("����������Ϊ��\n");
   srand((unsigned)time(NULL));
   for(i=0;i<N;i++) 
   {
      for(j=0;j<N;j++)
	  {
          sj[i][j]=rand()%90+10;
		  printf("%3d",sj[i][j]);
	  }
	  printf("\n");
   }
   for(i=0;i<N;i++)
   {
      min[i]=0;
	  for(j=1;j<N;j++)
		 if(sj[i][j]<sj[i][min[i]])
			 min[i]=j;
   }
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
		  if(j==min[i])
			   printf("0  ");
		  else 
			   printf("1  ");
   
      printf("\n");
   }




}
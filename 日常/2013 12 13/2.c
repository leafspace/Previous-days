/*
�ҳ�10-1000֮��� ��������ͬ��������ɵ� ����ƽ������
        ��ٷ����ж����оٶ��٣���һ�жϣ�������������ģ�
*/
#include "stdio.h"
#include "math.h"
int pd(int x)
{
   int s=0,bc=x;
   while(x)
   {
     s=s*10+x%10;
	 x=x/10;   
   }
   return s==bc;
}
int px(int x)
{
   int a[10]={0},i,bz=0;
   while(x)
   {
     a[x%10]++;
	 x=x/10;
   }
   for(i=0;i<10;i++)
	   if(a[i])
		   bz++;
	   return bz>2?0:1;
		    
}
main()
{
   int i;
   for(i=(int)sqrt(10)+1;i<=sqrt(1000);i++)
	   if(pd(i)&&px(i))
		   printf("%3d",i);
}
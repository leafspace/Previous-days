/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------
��Ŀ��������main()��һά����aΪ�������ݣ�������Ҫ�ж�����
      a�������Ƿ�����ȫ����������ȫ������������b�У�Ȼ��
      ������b����С����ȫ���Ƶ���һ��λ����,����Ԫ�غ��ƣ�
      �����λ�ò��䡣

��ȫ������һ��������x���������ӣ�����1��������x����֮��
      ����x�������x��һ����ȫ�������磺28��������
      1,2,4,7,14��1+2+4+7+14=28�����28��һ����ȫ����

��д����

    1. ��д����int factor(int x[],int n,int y[]),
       ������xǰn�����в�����ȫ������������ȫ������������
       y�У�����������ȫ���ĸ�����
    
    2. ��дvoid MoveElement(int y[],int n)��������y��n��Ԫ
       ����С����ȫ���Ƶ���һ��λ���ϣ�����Ԫ�غ��ƺ����
       λ�ò��䡣

     �������ݣ�5,496,23,28,6,8010,2012,1998,1975,2011
     ���н����Before Moving:
               b[0]=496
               b[1]=28
               b[2]=6
               After Moving:
               b[0]=6
               b[1]=496
               b[2]=28
              

---------------------------------------------------------
ע�⣺����Ķ�������main()�е��κ���䡣
-------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int factor(int x[],int n,int y[])
{
/**********Program**********/
int i,j,k=0,s;
  for(i=0;i<n;i++)
  {
	s=0;
    for(j=1;j<x[i];j++)
		if(!(x[i]%j))
			s=s+j;
	if(s==x[i])
		y[k++]=x[i];  
  }
  return k;
/**********  End  **********/
}

void MoveElement(int y[],int n)
{
/**********Program**********/
 int i,min=0,t;
 for(i=1;i<n;i++)
	 if(y[i]<y[min])
		  min=i;
 while(min)
 {
   t=y[0];
   for(i=0;i<n-1;i++)
	   y[i]=y[i+1];
   y[i]=t; 
   min--;
 }
/**********  End  **********/
}

int main()
{
    int a[10]={5,496,23,28,6,8010,2012,1998,1975,2011},b[10]={0},n=10,m,i;
    
    FILE *fp;
    if((fp=fopen("DATA.TXT","w"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }

    m=factor(a,n,b);
        
    printf("Before Moving:\n");  //�ƶ�ǰ
    fprintf(fp,"Before Moving:\n");
    for(i=0;i<m;i++)
    {
        printf("b[%d]=%d\n",i,b[i]);
        fprintf(fp,"b[%d]=%d\n",i,b[i]);
    }

    MoveElement(b,m);

    printf("After Moving:\n");  //�ƶ���
    fprintf(fp,"After Moving:\n");
    for(i=0;i<m;i++)
    {
        printf("b[%d]=%d\n",i,b[i]);
        fprintf(fp,"b[%d]=%d\n",i,b[i]);
    }
    fclose(fp);
    
    return 0;
}

/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���д����fun�ñȽϷ������������û�����ľ���10
      �����ݵ�����a���ɴ�С���򣬲��������������
      ��������

------------------------------------------------*/

#include "stdio.h"

int fun(int array[], int n)
{
  /**********Program**********/
  int i,j,max,t;
  for(i=0;i<n;i++)
  {
     max=i;
	 for(j=i+1;j<n;j++)
		 if(array[j]>array[max])
			   max=j;
	 t=array[i];
	 array[i]=array[max];
	 array[max]=t; 
  
  }
  /**********  End  **********/
}

main()
{
  int a[10],i;
  printf("����������a�е�ʮ����:\n");
  for (i=0;i<10;i++)
    scanf("%d",&a[i]);
  fun(a,10);
  printf("�ɴ�С����������:\n");
  for (i=0;i<10;i++)
    printf("%4d",a[i]);
  printf("\n");  
  yzj();
  
}

yzj()
{
  FILE *IN,*OUT;
  int n;
  int i[10];
  int o;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read File Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write File Error");
  }
  for(n=0;n<10;n++)
  {    
    fscanf(IN,"%d",&i[n]);
  }
  fun(i,10);
  for(n=0;n<10;n++)
  {    
    fprintf(OUT,"%d\n",i[n]);
  }
  fclose(IN);
  fclose(OUT);
}


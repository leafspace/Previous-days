/*
           �Գ�ͼ�Ρ��Ӽ���������һ��3<=n<=15������������Ļ������ԳƵ����Ρ�
                  ��:N����7,���ӡ����ͼ��
                              3      A
                              2     BAB
������������������������������1��  CBABC
                              0   DCBABCD
                              1    CBABC
                              2     BAB
                              3      A
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j;
    do
      {
         scanf("%d",&n);
         if(n%2!=1)  continue;
      }while(n<3||n>15);
    for(i=-(n/2);i<=n/2;i++)
       {  
           for(j=1;j<=35;j++)
               {
                    printf(" ");
               }
           for(j=1;j<=abs(i);j++)
               {
                    printf(" ");
               }
           for(j=1;j<=7-2*abs(i);j++)
               {
                    switch(abs(i)+j)
                      {
                           case 4:           printf("A");  break;
                           case 3:  case 5:  printf("B");  break;
                           case 2:  case 6:  printf("C");  break;
                           case 1:  case 7:  printf("D");  break;
                       }
               }
           printf("\n");
       }
}
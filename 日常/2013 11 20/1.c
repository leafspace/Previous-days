/* Note:Your choice is C IDE */
#include "stdio.h"
#include "math.h"
main()
{
    int n,i,j;
    printf("��������һ��3����15��������\n");
    do
    {
      scanf("%d",&n);
      if(!(n%2)||n<3||n>15)
         printf("���������������������룺\n");
    }while(!(n%2)||n<3||n>15);
    n=n/2;
    for(i=-n;i<=n;i++)
	  {
	    for(j=1;j<=abs(i);j++)
			printf(" ");
		for(j=abs(i)-n;j<=abs(abs(i)-n);j++)
			printf("%c",65+abs(j));
	    printf("\n");
      }
    
}
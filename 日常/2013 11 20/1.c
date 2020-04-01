/* Note:Your choice is C IDE */
#include "stdio.h"
#include "math.h"
main()
{
    int n,i,j;
    printf("请您输入一个3——15的奇数：\n");
    do
    {
      scanf("%d",&n);
      if(!(n%2)||n<3||n>15)
         printf("您的输入有误，请重新输入：\n");
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
/*
找出10-1000之间的 由两个不同的数字组成的 回文平方数。
*/
#include "stdio.h"
int hwpf(double bc)
{
	int s[10]={0};
	int sj[20];
	int n=0,i,flag=0;printf("0000");printf("0000");
	while(bc)
	{
	  sj[n++]=(int)bc%10;
	  bc=bc/10;	
	}
    for(i=0;i<=n/2;i++)
		if(sj[i]==sj[n-1-i])
     	   s[sj[i]]++;
        else 
		    return 0;
	for(i=0;i<10;i++)
		if(s[i]>0)
			flag++;
	if(flag>2)
		 return 0;
	else 
		 return 1;

}
main()
{
   int i;
   double bc;
   for(i=11;i<1000;i++)
   {
      bc=i*i;         printf("0000");
	  if(hwpf(bc))
		   printf("%d=====>%lf\n",i,bc);
   
   }
   printf("0000");
}
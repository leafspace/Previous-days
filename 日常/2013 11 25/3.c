/*
将1～9这9个数字顺序排列围成一圈,从中任意一个数字开始,依次将其分成三段,
每段数字连在一起算一个数,得到一个2位数、一个3位数和一个4位数,将这三个数
相加,使其和数能被77整除.编写一个能找出这三个数的程序.程序中必须包含一个
将数字分段,得到一个2位数、一个3位数和一个4位数的通用过程.
*/
int calculate(int ring[],int st[])
{
   int i,n=0;
   int a,b,c;
   for(i=0;i<9;i++)
   {
      a=ring[i]*10+ring[(i+1)%9];
      b=ring[(i+2)%9]*100+ring[(i+3)%9]*10+ring[(i+4)%9];
      c=ring[(i+5)%9]*1000+ring[(i+6)%9]*100+ring[(i+7)%9]*10+ring[(i+8)%9];
      st[n++]=a+b+c;
   }
   return n;
}
main()
{
	int ring[9]={1,2,3,4,5,6,7,8,9},st[50];
	int n,i;
    n=calculate(ring,st);
	for(i=0;i<n;i++)
	   if(st[i]%77)
	          printf("%3d\n",st[i]);
}
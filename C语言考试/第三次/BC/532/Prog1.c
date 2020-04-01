/*------------------------------------------------
【程序设计】
--------------------------------------------------

主函数main()中一维数组ring[9]存放数字1-9。将ring看成是一个首尾相接的环。将9个数分成3段，第1段为1个2位数，
第2段为1个3位数，第3段为1个4位数，程序计算这3段数之和。
要求从环的第1个数开始，直到第9个数，依上述规则进行处理。同时在这些和中寻找77的整数倍的数。
例如：从环的第一个数开始的3段数为12,345,6789,其和为7146；从环的第二个数开始的3段数为23,456,7891,其和为8370；
.....
编写程序：
1.编写函数void calculate(int ring[],int st[])，从数组ring的第1个数开始，将9个数分成3段，第1段为1个2位数，
第2段为1个3位数，第3段为1个4位数，程序计算所有3段数之和。并将所有3段数之和存入数组st中。
2.编写函数int check(int st[],int t77[])，在数组st中寻找77的整数倍的数，存入数组t77中。函数返回其个数。


------------------------------------------------*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void calculate(int ring[],int st[]){
/******************Program*************************/
int i,n=0;
int a,b,c;
for(i=0;i<9;i++)
{
   a=ring[i]*10+ring[(i+1)%9];
   b=ring[(i+2)%9]*100+ring[(i+3)%9]*10+ring[(i+4)%9];
   c=ring[(i+5)%9]*1000+ring[(i+6)%9]*100+ring[(i+7)%9]*10+ring[(i+8)%9];
   st[n++]=a+b+c;
}



/**********************End*************************/
}
int check(int st[],int t77[]){
/******************Program*************************/
int n=0,i;
for(i=0;i<9;i++)
   if(st[i]%77==0)  t77[n++]=st[i];
return n;
/**********************End*************************/
}
int main(){
        int ring[9]={1,2,3,4,5,6,7,8,9};
        int st[9],t77[9],i,k;
        FILE *fp;
         if((fp=fopen("DATA.TXT","w"))==NULL){
                printf("File open error\n");
                exit(0);
        }
        calculate(ring,st);
        for(i=0;i<9;i++){
                printf("%d\t",st[i]);
                fprintf(fp,"%d\t",st[i]);
        }
        printf("\n");
        fprintf(fp,"\n");
        k=check(st,t77);
        for(i=0;i<k;i++){
                printf("%d\t",t77[i]);
                fprintf(fp,"%d\t",t77[i]);
        }
        printf("\n");
        fprintf(fp,"\n");
        fclose(fp);
        getch();
        return 0;
}


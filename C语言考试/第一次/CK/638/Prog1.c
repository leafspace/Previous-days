/*【程序填空】
---------------------------------------------------------
函数gcd()计算整型数组a中相邻两元素的最大公约数，最小公倍数，
其中最大公约数存入数组b中，最小公倍数存入数组c中。
---------------------------------------------------------
注意：请勿改动主函数main()中的其他内容。
-------------------------------------------------------*/
#include <stdio.h>
#include <conio.h>
void gcd(int a[],int n,int b[],int c[]){
        int i,x,y,z;
/***********SPACE***********/
        for(i=0;i<n-1;i++){
                x=a[i];
                y=a[i+1];
                while(z=x%y){
                        x=y;y=z;
                }
                b[i]=y;
/***********SPACE***********/
                c[i]=a[i]*a[i+1]/b[i];
        }
}
int main(){
        int a[5]={8,12,5,7,14};
        int b[4],c[4];
        int i;
        gcd(a,5,b,c);
        for(i=0;i<5;i++)
                printf("%d\t",a[i]);
        printf("\n");
        for(i=0;i<4;i++)
                printf("%d\t",b[i]);
        printf("\n");
        for(i=0;i<4;i++)
                printf("%d\t",c[i]);
        printf("\n");
        getch();
        return 0;
}

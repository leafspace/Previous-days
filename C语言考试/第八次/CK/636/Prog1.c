/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目：将输入的一个十进制正整数转换为十六进制字符形式并显示。

---------------------------------------------------------
注意：请勿改动主函数main()中的其他内容。
-------------------------------------------------------*/

#include <stdio.h>
void main(){
    char dex[17]={"0123456789ABCDEF"};
    int  c[8],i,base=16;
    int n;
    printf("输入十进制正整数 ");
    scanf("%d",&n);
    i=0;
    do{
/***********SPACE***********/
        c[i++]=n%base;
        n=n/base;
    }while(n);
    printf("对应的十六进制数 ");
    for(--i;i>=0;i--)
/***********SPACE***********/
       printf("%c",dex[c[i]]);
    printf("\n");
}

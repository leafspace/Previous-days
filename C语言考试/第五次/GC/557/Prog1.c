/*-------------------------------------------------------
【程序改错】
---------------------------------------------------------

题目：函数unsigned fun(long s, int w)返回长整型变量s中第w
      位的值，例如调用fun(216783,1) 函数返回3，调用fun(216783,3)
      函数返回7。main()从键盘接收一个长整数给变量s，通过
      调用fun()函数求s奇数位之和，例如数216783各奇数位数
      字为1，7和3，它们的和为11。

下面给定的程序存在错误，请改正。

---------------------------------------------------------
注意：不得增行或删行，也不得更改程序的结构。
--------------------------------------------------------*/

#include <stdio.h>
unsigned fun(long s, int w)
{
        int d;
        while(w>0)
        {
/***********FOUND***********/
                d=s%10;
                s /=10;
                w--;
        }
        return d;
}

main()
{
/***********FOUND***********/
        unsigned tot=0, w=1;
        long s, step;
        printf(" Enter a long integer number:");
        scanf("%ld", &s);
        step = s;
        while (step!=0)
        {
/***********FOUND***********/
                tot = tot+fun( s ,w);
                w+=2;
                step /=100;
        }
        printf("tot=%d\n", tot);
        return 0;
}

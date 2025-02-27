/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：程序对一维数组a中数据进行升序排序后，对数组a中重复
      出现的数据，删除重复数据，保留一个。对只出现一次的
      数据则全部保留。

编写程序：
      1、编写sort(int a[],int n)函数，对数组a中n个元素进
         行升序排序。

      2、编写int delelem(int a[],int n)函数，对数组a中n个
         数据删除重复数据，只保留一个。对只出现一次的数据
         则全部保留。函数返回数组中剩余元素的个数。

例如：
      数组a的初始数据为：2,5,2,4,20,0,4,-5,-5,16,2,-4,20。
      升序排序后为：     -5,-5,-4,0,2,2,2,4,4,5,16,20,20。
      删除重复数据后为： -5,-4,0,2,4,5,16,20。

---------------------------------------------------------
注意：请勿改动主函数main()中的任何语句。
-------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void sort(int a[],int n){
/**********Program**********/
int i,j,min,t;
for(i=0;i<n;i++)
{
     min=i;
     for(j=i+1;j<n;j++)
       if(a[j]<a[min])
         min=j;
     t=a[i];
	 a[i]=a[min];
	 a[min]=t;
}


/**********  End  **********/
}

int delelem(int a[],int n){
/**********Program**********/
int i,j;
for(i=0;i<n-1;i++)
{
    if(a[i]==a[i+1])
	{
	    for(j=i+1;j<n;j++)
			a[j]=a[j+1];
	
	    n--;
	}
    else 
	   continue;
}
/**********  End  **********/
}

void main(){
        int a[]={12,2,1,-3,7,-3,4,15,2,0,1,15};
        int  n,i;
        FILE *fp;
        n=sizeof(a)/sizeof(int);
        sort(a,n);
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);
        printf("\n");
        n=delelem(a,n);
        if((fp=fopen("data.txt","w"))==NULL){
            printf("File open error\n");
            exit(0);
        }
        for(i=0;i<n;i++){
                fprintf(fp,"%d\t",a[i]);
                printf("%d\t",a[i]);
        }               
        printf("\n");
        fclose(fp);
}

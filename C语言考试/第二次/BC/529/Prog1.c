/*------------------------------------------------
【程序设计】
--------------------------------------------------

主函数main()中str_b是这样的字符串：若干个长度不等的，连续的'0'、'1'字符组成的字符子串被长度不等的'.'字符间隔。将连续的'0'、'1'字符子串看成是
是二进制数。要求将其转换为十进制整数。其中字符子串的首字符代表二进制数的符号位，'0'表示正数，'1'表示负数(例如："0111"表示7 ,"1111"表示-7)。

编写程序:
1.编写函数int convert(char b[],int d[])，将字符数组b中连续二进制数字字符子串转换为十进制整数，并存入整型数组d中。函数返回十进制整数的个数。
2.编写函数void sort(int d[],int n)，对数组d中n个元素进行升序排序。


------------------------------------------------*/



#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int convert(char b[],int d[]){
/******************Program*************************/
  int i=0,n=0,s=0,flagks=0,flagzf=1;
    while(b[i]) 
      {
          if(b[i]=='.')
               if(!flagks)
                     {
                        i++;
                        continue;	
                     }	
      	       else 
      	             {
      	                d[n++]=s*flagzf;
      	                flagks=0;
      	                s=0;
      	                i++;	
      	             	continue;
      	             }
      	   else
      	        if(!flagks)
      	             {
      	                flagks=1;
      	                if(b[i]!=48)  
      	                    flagzf=-1;
      	                else
      	                    flagzf=1;
      	                i++;
      	                continue;      	             	
      	             }
      	         else 
      	             {
      	                 s=s*2+(b[i]-48);
      	                 i++;
      	                 continue;     	             	
      	             }
      	
      	
      }

   return n;
/**********************End*************************/
}

void sort(int d[],int n){
/******************Program*************************/
  int i,j,t;
  for(i=0;i<n-1;i++)
      for(j=i+1;j<n-1;j++)
          if(d[i]>d[j])
             {
                t=d[i];
                d[i]=d[j];
                d[j]=t;             	
             }



/**********************End*************************/
}

int main(){
        char str_b[100]="...111100.01111.01100111...0111..110000.011..";
        int int_d[10];
        int i,k;
        FILE *fp;
        if((fp=fopen("DATA.TXT","w"))==NULL){
                printf("File open error\n");
                exit(0);
        }
        k=convert(str_b,int_d);
        for(i=0;i<k;i++){
                printf("%d\t",int_d[i]);
                fprintf(fp,"%d\t",int_d[i]);
        }
        printf("\n");
        fprintf(fp,"\n");
        sort(int_d,k);
        for(i=0;i<k;i++){
                printf("%d\t",int_d[i]);
                fprintf(fp,"%d\t",int_d[i]);
        }
        printf("\n");
        fprintf(fp,"\n");
        fclose(fp);
        getch();
        return 0;
}

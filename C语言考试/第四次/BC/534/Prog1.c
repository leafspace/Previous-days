/*------------------------------------------------
【程序设计】
--------------------------------------------------

将主函数main()中字符数组IPb中的32个'0','1'字符看做一个32位的二进制形式的IP地址，将其转换为4个十进制数整数形式的IP地址。并以点分十进制记法(XXX.XXX.XXX.XXX)输出IP地址。
同时指出该地址所属的地址类。IP地址类见下面分类：
A类地址：1.0.0.1-126.255.255.254
B类地址：128.0.0.1-191.255.255.254
C类地址：192.0.0.1-223.255.255.254
D类地址：224.0.0.0-239.255.255.255
E类地址：240-

编写程序：
1.编写函数void btod(char ipb[],int ipd[]),将字符数组ipb中由字符组成的二进制形式的IP地址转换为十进制整数形式的IP地址，存入数组ipd中。
2.编写函数char classto(int ip)，依据参数ip的值，判断IP所属的地址类，函数返回所属类（返回字符'A'~'E'）。


------------------------------------------------*/



#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void btod(char ipb[],int ipd[]){
/******************Program*************************/
int i,s=0,n=0;
for(i=0;i<33;i++)
{
   s=s*2+ipb[i]-'0';
   if((i+1)%8==0)  
   { 
	 ipd[n++]=s;
     s=0;
   }
}


/**********************End*************************/
}        
char classto(int ipd){
/******************Program*************************/
  if(ipd<128)  return 'A';
  else  if(ipd<192)   return 'B';
        else  if(ipd<224)  return 'C';
		      else  if(ipd<240)  return 'D';
                    else   return 'E';
/**********************End*************************/
}

int main(){
        char IPb[33]="11000000111011001110001110000011",c;
        int IPd[4]={0},i;
        FILE *fp;
        btod(IPb,IPd);
        c=classto(IPd[0]);
         if((fp=fopen("DATA.TXT","w"))==NULL){
                printf("File open error\n");
                exit(0);
        }
        for(i=0;i<3;i++){
                printf("%d.",IPd[i]);
                fprintf(fp,"%d.",IPd[i]);
        }
        printf("%d\t",IPd[3]);
        fprintf(fp,"%d\t",IPd[3]);
        printf("%c类地址\n",c);
        fprintf(fp,"%c类地址\n",c);
        fclose(fp);        
        
        return 0;
}

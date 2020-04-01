/*************************************************************

题目：主函数main()中由数字和字母组成的字符串s为测试数据，程序
      主要提取字符串s中由字符'$'分隔的不同八进制数形式的字符串，
      将八进制数形式字符子串所对应的字符生成新的字符串t；然后
      统计字符串t中所有数字子串对应整数的出现频率。

例如：字符串s为"101$062$063$114$066$110$062$063$141$071"，处理
      后字符串t为"A23L6H23a9"，其中"23"对应整数23出现频率为2,
      "6"和"9"对应整数出现频率为1。

编写程序：
    1. 编写函数void GenStr(char s[],char t[]),计算字符串s中不同
       八进制数形式的字符子串，将每个八进制数形式字符子串所对应
       的字符保存在字符数组t中。

    2. 编写函数int CountFreq(char t[],int b[],int Freq[])，统计
       字符数组t中不同数字子串对应整数出现频率，不同整数保存在
       整数数组b中,出现频率保存在整数数组Freq中，函数返回整数个
       数。
     
**************************************************************
注意：请勿改动主程序main()中的任何语句。
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define N 10

void  GenStr(char s[],char t[])
{
/**********Program**********/
int i,k=0,n=0;
for(i=0;s[i];i++)
{
   if(isdigit(s[i]))
      k=k*8+s[i]-'0';
   if(isdigit(s[i])&&(!isdigit(s[i+1])))
	  {
	    t[n++]=k;
	    k=0;
	  }
}
t[n]=0;
/**********  End  **********/
}

int CountFreq(char t[],int b[],int Freq[])
{
/**********Program**********/
       /*编写函数int CountFreq(char t[],int b[],int Freq[])，统计
       字符数组t中不同数字子串对应整数出现频率，不同整数保存在
       整数数组b中,出现频率保存在整数数组Freq中，函数返回整数个
       数。*/
int i,j,z,k=0,num,flag;
char bc[20];
for(i=0;t[i];i++)
{
   num=0;flag=1;;
   if(isdigit(t[i]))                       /*当运行到数字字符的时候，进行如下处理*/
     {
        for(j=0;isdigit(t[i]);i++,j++)         /*无影响对即将连续的字符串进行保存处理*/
           {
              num=num*10+t[i]-'0';         /*将连续的字符串保存为数据为下面存入数组Freq做准备*/
              bc[j]=t[i];                /*将连续的字符串保存为下面查找到相同的字符串来计数做准备*/
           }
        bc[j]=0;
        for(j=0;j<k;j++)                   /*到Freq中查看当前取出的字符串所对应的数据是否已经出现；控制其为不重复元素*/
           if(num==Freq[j])
              {
                flag=0;
                break;
              }                            /*如果flag为0，则说明当前取出的数据已经出现*/
        if(flag)
           {
              Freq[k]=num;                 /*如果这是一个新的字符，那么就在此保存*/
              b[k]=0;                      /*同时将此位置的次数置0*/
              for(j=0;j<strlen(t)-strlen(bc)+1;j++)/*从最前面开始查找与之相同的字符串*/
                 {
                     for(z=0;bc[z];z++)    /*断开此处依次比较如果不同就退出以便下面对是否为已经存储的字符串作准备*/
                        if(bc[z]!=t[j+z])
                            break;
                     if(!bc[z])            /*对刚刚走过的部分进行是否为已经保存的字符串的判断*/
                        {
                        	b[k]++;
                        	j=j+z;
                        }
                 }
              k++;                         /*存储完毕为下一次做准备*/
           }

     }
}
return k;
/**********  End  **********/
}

int main()
{
    char s[]="101$062$063$114$066$110$062$063$141$071";
    char t[N]="";
    int b[N]={0},Freq[N]={0};
    int num=0,i=0;

    FILE *fp;
    if((fp=fopen("DATA.TXT","w"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }

    GenStr(s,t);
    printf("The string t is: %s\n",t);
    fprintf(fp,"The string t is: %s\n",t);

    num=CountFreq(t,b,Freq);
    printf("The different integer and frequency is: ");
    fprintf(fp,"The different integer and frequency is: ");
        
    for(i=0;i<num;i++)
    {
        printf("[%d: %d] ",b[i],Freq[i]);
        fprintf(fp,"[%d: %d] ",b[i],Freq[i]);

    }
    printf("\n");
    fprintf(fp,"\n");

    fclose(fp);
    
    return 0;
}

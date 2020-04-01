/*------------------------------------------------
��������ơ�
--------------------------------------------------

����Ӣ�Ĵ�Сд��ĸ��Ȩֵ�ֱ�Ϊ:
        A-E,a-e         1;
        F-J,f-j                2;
        K-O,k-o                3;
        P-T,p-t                4;
        U-Y,u-y                5;
        Z,z                6
����������main()������words�еĸ�Ӣ�ĵ��ʵ�Ȩ�أ�Ӣ�ĵ��ʵ�Ȩ��Ϊ�õ��ʸ���ĸȨֵ֮�ͣ�������Ȩ�ؽ��н�������
���磬����"World"��Ȩ��Ϊ16(WΪ5;oΪ3;rΪ4;lΪ3;dΪ1,5+3+4+3+1=16)��

��д����:
1.��д����void calculate(char w[][20],int n,int p[])����������w��n��Ӣ�ĵ��ʵ�Ȩ�أ�����Ȩ�ش��������p�С�
2.��д����void sort(int p[],int n,char w[][20])��������p��n�����ʵ�Ȩ�ؽ��н�������Ȩ�ض�Ӧ����������w�е�λ��ҲҪ����Ӧ������


------------------------------------------------*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void calculate(char w[][20],int n,int p[]){
/******************Program*************************/
  int i,j,s;
    for(i=0;i<n;i++)
     {
       j=0;s=0;
       while(w[i][j])
         s=s+(tolower(w[i][j++])-65)/5+1;
       p[i]=s;
     }
/**********************End*************************/
}


void sort(int p[],int n,char w[][20]){
/******************Program*************************/
  int i,j,t,max;
  char k[20];
  for(i=0;i<n;i++)
   {  
   	 max=i;
     for(j=i+1;j<n;j++)
       if(p[j]>p[max])
          max=j;
      t=p[max];
      p[max]=p[i];
      p[i]=t;
      strcpy(k,w[max]);
      strcpy(w[max],w[i]);
      strcpy(w[i],k);
     }
/**********************End*************************/
}

int main(){
        char words[5][20]={{"JiangSu"},{"Teachers"},{"University"},{"of"},{"Technology"}};
        int value[5]={0};
        int i;
        FILE *fp;
        if((fp=fopen("DATA.TXT","w"))==NULL){
                printf("File open error\n");
                exit(0);
        }
        calculate(words,5,value);
        for(i=0;i<5;i++){
                fprintf(fp,"%-20s%4d\n",words[i],value[i]);
                printf("%-20s%4d\n",words[i],value[i]);
        }
        printf("\n");
        fprintf(fp,"\n");
        sort(value,5,words);
        for(i=0;i<5;i++){
                fprintf(fp,"%-20s%4d\n",words[i],value[i]);
                printf("%-20s%4d\n",words[i],value[i]);
        }
        fclose(fp);
        getch();
        return 0;
}


/*------------------------------------------------
��������ơ�
--------------------------------------------------

������main()��str_b���������ַ��������ɸ����Ȳ��ȵģ�������'0'��'1'�ַ���ɵ��ַ��Ӵ������Ȳ��ȵ�'.'�ַ��������������'0'��'1'�ַ��Ӵ�������
�Ƕ���������Ҫ����ת��Ϊʮ���������������ַ��Ӵ������ַ�������������ķ���λ��'0'��ʾ������'1'��ʾ����(���磺"0111"��ʾ7 ,"1111"��ʾ-7)��

��д����:
1.��д����int convert(char b[],int d[])�����ַ�����b�����������������ַ��Ӵ�ת��Ϊʮ������������������������d�С���������ʮ���������ĸ�����
2.��д����void sort(int d[],int n)��������d��n��Ԫ�ؽ�����������


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

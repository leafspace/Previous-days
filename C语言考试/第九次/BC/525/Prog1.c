/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ��������main()���ַ���a�����ɸ������������ַ���ת������
      �����������������ţ�������������n�У���������n��Ԫ��
      ��������������������Сֵ����Сֵ�����Լ����

      ϵͳ���� int isdigit(char c) �Ĺ������жϲ���c�Ƿ���
      �����ַ������c�������ַ������������棬���򷵻ؼ١�

��д����
      1����дint abstract(char a[],int n[])����: ���ַ���a
         �е����������ַ�ת��Ϊ����������������n��,��������
         ����������

      2����дvoid sort(int n[],int k)����: ������n�е�k��Ԫ
         �ؽ�����������

      3����дint gcd(int a,int b)����: �����a,b�����Լ����

---------------------------------------------------------
ע�⣺����Ķ�������main()�е��κ���䡣
-------------------------------------------------------*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int abstract(char a[],int n[]){
/**********Program**********/
int k=0,i=0,flag=0,s=0;
  while(a[i])
  {  if(isdigit(a[i]))
        flag=1; 
     else 
	 {
		 i++;
		 continue;
     }
     if(isdigit(a[i])&&!(isdigit(a[i-1]))&&flag)
	 {
		 s=0;
		 s=s*10+a[i++]-'0';
		 continue;
	 }
	 else 
		 if(isdigit(a[i])&&isdigit(a[i+1])&&flag)
			 s=s*10+a[i++]-'0';
		 else
			 if(!(isdigit(a[i+1]))&&flag)
			 {   
			    s=s*10+a[i++]-'0';
				n[k++]=s;
			 }
  }
return k;
/**********  End  **********/
}

void sort(int n[],int k){
/**********Program**********/
int i,j,min,t;
for(i=0;i<k;i++)
{
   min=i;
   for(j=i+1;j<k;j++)
      if(n[j]<n[min])
		   min=j;
   t=n[i];
   n[i]=n[min];
   n[min]=t;
}
/**********  End  **********/
}

int gcd(int a,int b){
/**********Program**********/
int i,t;
if(a<b)
{
   t=a;
   a=b;
   b=t;
}
for(i=b;i>=1;i--)
  if(a%i==0&&b%i==0)
	     return i;
return 1;/*����ʡ��*/
/**********  End  **********/
}

void main(){
        char a[100]={"kn--23,q,37.&#%%18'w94jAF%130Enter12-+55"};
        int  n[10],k,i;
        FILE *fp;
        k=abstract(a,n);
        sort(n,k);
        if((fp=fopen("data.txt","w"))==NULL){
                printf("File open error\n");
                exit(0);
        }
        for(i=0;i<k;i++){
                fprintf(fp,"%d\t",n[i]);
                printf("%d\t",n[i]);
        }
        k=gcd(n[0],n[1]);
        fprintf(fp,"\n%d, %d 's gcd=%d\n",n[0],n[1],k);
        printf("\n%d, %d 's gcd=%d\n",n[0],n[1],k);
        fclose(fp);
}

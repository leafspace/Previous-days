/*-------------------------------------------------------
��������ա�
---------------------------------------------------------

��Ŀ��ͳ���ַ���str�е��ʵ�����������ʵ���ĸ������̵�
      ����ĸ��������֮��������һ���ո񡣼���str�������
      ������20����ĸ��������isalpha�����������жϲ����Ƿ�
      ����ĸ�ַ����������ĸ�ַ������������棬��������
      �ؼ١�

---------------------------------------------------------
ע�⣺����Ķ�������main()�е��������ݡ�
-------------------------------------------------------*/

#include <stdio.h>
#include <ctype.h>
void main(){
    int i,len=0;
    int numofword,maxlen,minlen;
    char str[1000]="Robots can feel happy, sad,  angry, drowsy,  hungry or fearful.  They also have various personalities.";
/***********SPACE***********/
    numofword=0;
    maxlen=0;
    minlen=20;
    for(i=0;str[i];i++){
    if(!(isalpha(str[i])) && isalpha(str[i-1])){
        maxlen=len>maxlen? len: maxlen;
        minlen=len<minlen? len: minlen;
        len=0;
        numofword++;
    }
    else if(isalpha(str[i]))
/***********SPACE***********/
        len++;
    }
    printf("������=%d,�������ĸ��=%d,��̵�����ĸ��=%d\n",numofword,maxlen,minlen);
}

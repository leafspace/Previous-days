/*------------------------------------------------------        
������Ĵ�
--------------------------------------------------------

����ȥ��������main()���ַ���str�еķ���ĸ�ַ���
����IsAlpha()�Ĺ������ж��ַ�c�Ƿ�Ϊ����ĸ��
------------------------------------------------------*/

#include <stdio.h>
#include <conio.h>
int IsAlpha(char c[]){
/**************FOUND******************/
        return ((c>='a' && c<='z')||(c>='A' && c<='Z'));
}
int main(){
        char str[]={"/** One World,One Dream! **/"};
        int prev,next;
        prev=next=0;
        while(str[next]){
                if(IsAlpha(str[next])){
/**************FOUND******************/
                        str[prev]=str[next];
                        prev++;
                }
                next++;
        }
/**************FOUND******************/
        str[prev]=0;
        puts(str);
        getch();
        return 0;
}

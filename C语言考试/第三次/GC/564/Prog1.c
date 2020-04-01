/*------------------------------------------------------        
【程序改错】
--------------------------------------------------------

程序去除主函数main()中字符串str中的非字母字符。
函数IsAlpha()的功能是判断字符c是否为是字母。
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

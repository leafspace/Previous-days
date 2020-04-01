/*------------------------------------------------------        
【程序改错】
--------------------------------------------------------
主函数main()统计字符串str中的各字母(不区分大小写)及其他
字符出现的次数，并显示统计结果(次数为0，则不显示)。

------------------------------------------------------*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(){
        char str[]={"---JiangSu Teachers University of Technology---"};
        int chnum[27]={0},i=-1;
/**************FOUND******************/
        while(str[++i]){
                if(isalpha(str[i]))
/**************FOUND******************/
                        chnum[toupper(str[i])-'A']++;
                else 
                        chnum[26]++;
        }
        for(i=0;i<27;i++)
/**************FOUND******************/
                if(chnum[i]==0)
                        if(i==26)
                                printf("other ch=%d\n",chnum[26]);
                        else
                                printf("%c(%c)=%d\n",i+65,i+97,chnum[i]);
        
        return 0;
}

/* Note:Your choice is C IDE */
/*程序的功能是对字符串加密。密钥为一数字串，每个数字表示将首字符右移的位置，例如，若明文字符串为"help me"，
密钥为“4235”密钥中第一个数字4表示将首字符h移到位置4，得到新字符串elph me，再取密钥的下一个数字符串2，表
示将首字符e移到第2位，得到新字符串leph me,进行上述操作，直到最后一个密钥数字处理完就得到密文。若移位超出
原文长度，则自动回转（按原文长度取模,举例，原文长为7，密钥值为9，则应移到第2位）。*/
#include "stdio.h"
#include "string.h"
main()
{
	char mw[]="help me!",jmmy[]="2059454684564683546845468796",x;
       int i,j,n,k;
       n=strlen(mw);
       for(i=0;jmmy[i];i++)
        {
           k=(jmmy[i]-'0')%n;
           x=mw[0];
           for(j=1;j<=k;j++)
              mw[j-1]=mw[j];
           mw[k-1]=x;
        }
       puts(mw);
}

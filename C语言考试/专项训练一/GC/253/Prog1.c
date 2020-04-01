/*------------------------------------------------------        
【程序改错】
--------------------------------------------------------

功能：输入10个数,要求输出这10个数的平均值

------------------------------------------------------*/

float average(float array[10])
{
  int i;
  float aver,sum=array[0];
  /***********FOUND***********/
  for(i=1;i<10;i++)
    sum=sum+array[i];
  aver=sum/10.0;
  return(aver);
}

main( )
{   
  /***********FOUND***********/    
  int score[10];float aver ;
  int i;
  printf("input 10 scores:\n");
  for(i=0;i<10;i++)
    /***********FOUND***********/
    scanf("%f",& score[i]);
  printf("\n");
  /***********FOUND***********/
  aver=average(score);
  printf("average score is %5.2f",aver);
}

#include<stdio.h>
int main()
{
     int N;
     scanf("%d",&N);
     int pos=0,neg=0,num;
     
     for (int i = 0; i < N; i++)
     {
       scanf("%d",&num);
       if (num>0)
       {
       pos += num;

       }
       else
       {
        neg += num;
       }
       
     }
     printf("%d %d\n",pos,neg);
     

    return 0;
}
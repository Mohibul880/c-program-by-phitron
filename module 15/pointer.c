#include<stdio.h>
int main()
{
     int x=100;
     int *ptr = &x;
     *ptr =200;
    //  printf("x er address - %p\n",&x);
    //  printf("ptr er value - %p\n",ptr);
    //  printf("ptr er address - %p\n",&ptr);
    //  printf("ptr er size - %d\n",sizeof(ptr));
       printf("x er valu - %d\n",x);
       printf("x er valu - %d\n",*ptr);



    return 0;
}
#include<stdio.h>
int main()
{
     double x=10.45;
     double *ptr = &x;
     double *ptr2=ptr;
     *ptr2 =20.245;
      printf("x er valu - %0.2lf\n",x);
       printf("x er valu - %0.2lf\n",*ptr);
       printf("x er valu - %0.2lf\n",*ptr2);
    //    printf("ptr er size - %d\n",sizeof(*ptr));


    return 0;
}

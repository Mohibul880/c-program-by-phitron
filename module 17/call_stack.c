#include<stdio.h>
 void world()
{
    printf("world start\n");
    printf("world end\n");
}
void hello()
{
    printf("hello Start\n");
    world();
    printf("hello End\n");
}
int main()
{
    printf("Main Srtart\n");
     hello();
     printf("Main End\n");

    return 0;
}
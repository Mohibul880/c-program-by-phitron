
#include <stdio.h>

int main() 
{
    
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }
    
    int div_2 = 0;
    int div_3 = 0;

    for (int i = 0; i < N; i++) 
    {
        if (A[i] % 2 == 0) 
        {
            div_2++;
            
        } 
        else if (A[i] % 3 == 0) 
        {
            div_3++;
        }
    }
    printf("%d %d\n", div_2, div_3);

    return 0;
}


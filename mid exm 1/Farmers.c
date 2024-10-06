#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);    
    while (T--)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);        
        int frist_day = D * M1;        
        int new_days = frist_day / (M1 + M2);        
        int final_day = D - new_days;        
        printf("%d\n", final_day); 
    }    
    return 0;
}
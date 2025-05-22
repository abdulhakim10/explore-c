#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int str = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = str-1; j >= 0; j--)
        {
            printf("*");
        }
        str--;
        printf("\n");
        
    }
    
    return 0;
}
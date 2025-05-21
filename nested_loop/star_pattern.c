#include<stdio.h>
int main()
{
    int n, st=1; 
    scanf("%d", &n);
    int star = n * 2;
    // int star = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < st; j++)
        {
            printf("*");
        }
        printf("\n");
        st +=2;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j < star -1; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
    }
    
    
    return 0;
}
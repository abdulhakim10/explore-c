#include <stdio.h>
int main()
{
    int n, star = 1;
    scanf("%d", &n);
    int len = n + 10;
    int row = 0;
    for (size_t i = 0; i <= len; i++)
    {
        if (i % 2 != 0)
        {
            row++;
        }
    }
    
    int space = row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < space; j++)
        {
           printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    } 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        
         for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
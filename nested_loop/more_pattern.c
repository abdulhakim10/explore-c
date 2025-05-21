\#include<stdio.h>
int main()
{
    int n, star=1;
    scanf("%d", &n);
    int space = n-1;
    // for lines
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        // for star
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        star ++;
        space--;
    }
    
    
    return 0;
}
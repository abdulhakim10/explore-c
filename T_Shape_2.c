#include<stdio.h>
int main()
{
    int n,str=1;
    scanf("%d", &n);
    int space = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = space-1; j > 0; j--)
        {
            printf(" ");
        }
        
        for (int j = 0; j < str; j++)
        {
            printf("*");
        }
        str += 2;
        space--;
        printf("\n");
    }
    
    return 0;
}
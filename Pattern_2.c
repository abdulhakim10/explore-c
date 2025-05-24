#include<stdio.h>
int main()
{
    int n, count=1;
    scanf("%d", &n);
    int space = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }
        
        for (int j = count; j > 0; j--)
        {
            printf("%d", j);
        }
        count++;
        space--;
        printf("\n");
    }
    
    return 0;
}
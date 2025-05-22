#include<stdio.h>
int main()
{
    int n,str=1;
    scanf("%d", &n);
    int space = n;
    int str2 = n*2;
    int space2 = 1;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < space2; j++)
        {
            printf(" ");
        }
        

        for (int j = str2 -1; j > 0; j--)
        {
            printf("*");
        }
        str2 -=2;
        space2++;
       printf("\n");
    }
    

    
    
    return 0;
}
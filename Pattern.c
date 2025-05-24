#include<stdio.h>
int main()
{
    int n, star=1;
    scanf("%d", &n);
    int space = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        if(i % 2 == 0){
            for (int j = 0; j < star; j++)
        {
            printf("#");
        }
        }else{
            for (int j = 0; j < star; j++)
        {
            printf("-");
        }
        }
        star +=2;
        space --;
        printf("\n");
    }

    int space2 = 1;
    int star2 = 2 * n - 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }
        if((i + n) % 2 == 0){
            for (int j = 0; j < star2; j++)
        {
            printf("#");
        }
        }else{
            for (int j = 0; j < star2; j++)
        {
            printf("-");
        }
        }
        star2 -= 2;
        space2 ++;
        printf("\n");
    }
    
    return 0;
}
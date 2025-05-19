#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int x[2] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0){
            x[0]++;
        }
        else if (a[i] % 3 == 0)
        {
            x[1]++;
        }
        else if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            x[0]++;
        }
        
        
    }
    for (int i = 0; i < 2 ; i++)
    {
        printf("%d ", x[i]);
    }
    
    
    return 0;
}
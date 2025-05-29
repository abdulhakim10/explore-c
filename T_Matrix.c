#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) // for row
    {
        for (int j = 0; j < n; j++) // for column
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    // flag variable
    int sum_primary = 0;
    int sum_secondary = 0;
    for (int i = 0; i < n; i++) // for row
    {
        for (int j = 0; j < n; j++) // for column
        {
            if (i == j)
            {
                sum_primary += a[i][j];
                // printf("%d ", a[i][j]);
            }
            if (i + j == n - 1)
            {
                sum_secondary += a[i][j];
                // printf("%d ", a[i][j]);
            }
            
            
        }
        printf("\n");
    }
    // printf("%d\n", sum_primary);
    // printf("%d\n", sum_secondary);
    
    int abs_total = abs(sum_primary - sum_secondary);
    printf("%d\n", abs_total);

    return 0;
}
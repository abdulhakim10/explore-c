#include <stdio.h>

int main()
{
    int n, c = 4;
    scanf("%d", &n);

    long long int a[n][c]; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        long long int M = a[i][0];
        long long int A = a[i][1];
        long long int B = a[i][2];
        long long int C = a[i][3];
        long long int product = A * B * C;

        if (product == 0)
        {
            if (M == 0)
                printf("0\n");
            else
                printf("-1\n");
        }
        else if (M % product != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", M / product);
        }
    }

    return 0;
}

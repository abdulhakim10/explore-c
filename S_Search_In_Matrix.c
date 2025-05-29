#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    bool is_take_number = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                is_take_number = false;
            }
        }
    }

    if (is_take_number == false)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}
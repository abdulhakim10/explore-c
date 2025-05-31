#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c)
    {
        printf("NO\n");
        return 0;
    }

    bool is_jadu_matrix = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j || i + j == r - 1)
            {

                if (a[i][j] != 1)
                {
                    is_jadu_matrix = false;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    is_jadu_matrix = false;
                }
            }
        }
    }

    if (is_jadu_matrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

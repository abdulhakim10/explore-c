#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);  // Read matrix dimensions

    int matrix[n][m];        // Declare matrix

    // Read matrix values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print last row
    for (int j = 0; j < m; j++)
    {
        printf("%d ", matrix[n - 1][j]);
    }
    printf("\n");

    // Print last column
    for (int i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][m - 1]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    // for row or array of arrays
    for (int i = 0; i < r; i++)
    {
        // for element array
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int specific;
    scanf("%d", &specific);
    // print specific row
    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[specific][i]);
    }
    printf("\n");
    // print specific column
    for (int i = 0; i < r; i++)
    {
        printf("%d\n", a[i][specific]);
    }
    
    
    return 0;
}
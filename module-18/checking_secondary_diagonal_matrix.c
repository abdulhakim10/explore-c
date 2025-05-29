#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    // for row
    for (int i = 0; i < r; i++)
    {
        // for column
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_diagonal = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            // for column
            for (int j = 0; j < c; j++)
            {
                if(i + j != r - 1){
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("This is not a secondary diagonal matrix\n");
                    }
                    
                }
            }
        }
        if (is_diagonal)
        {
            printf("This is a secondary diagonal matrix\n");
        }
        
    }
    else
    {
        printf("This is not a secondary diagonal matrix\n");
    }

    return 0;
}
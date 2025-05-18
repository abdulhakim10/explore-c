#include<stdio.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    int val = strcmp(x, y);

    if (val < 0)
    {
        printf("%s", x);
    }
    else if (val > 0)
    {
        printf("%s", y);
    }
    else if (val == 0)
    {
        printf("%s", x);
    }

    // int i = 0;
    // while (1)
    // {
    //     if (x[i] == '\0' && y[i] == '\0')
    //     {
    //         printf("%s", y);
    //     }
        
    //     else if(x[i] == "\0"){
    //         printf("%s", x);
    //         break;
    //     }
    //     else if (y[i] == "\0")
    //     {
    //         printf("%s", y);
    //         break;
    //     }
    //     else if (y[i] == x[i])
    //     {
    //         i++;
    //     }
    //     else if (y[i] < x[i])
    //     {
    //         printf("%s", y);
    //         break;
    //     }
    //     else if (y[i] > x[i])
    //     {
    //         printf("%s", x);
    //         break;
    //     }
    // }
    
    return 0;
}
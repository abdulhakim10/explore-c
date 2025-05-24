#include <stdio.h>

void print1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n) {
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print1(n);
    return 0;
}

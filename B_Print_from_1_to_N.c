#include<stdio.h>
void rec(int n, int i)
{
    if (i == n+1)
    {
        return;
    }
    printf("%d\n", i);
    rec(n, i+1);
    
}
int main()
{
    int n, i=1;
    scanf("%d", &n);
    rec(n, i);
    return 0;
}
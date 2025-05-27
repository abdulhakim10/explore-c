#include<stdio.h>
void rec(int n, int i)
{
    if (i == n+1)
    {
        return;
    }
    rec(n, i+1);
    printf("%d ", i);
    
}
int main()
{
    int n, i=1;
    scanf("%d", &n);
    rec(n, i);
    return 0;
}
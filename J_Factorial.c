#include<stdio.h>
long long int rec(int n)
{
    if (n == 1)
    {
       return 1;
    }
   int mult = rec(n-1);
    return n*mult;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = rec(n);
    printf("%lld", ans);
    return 0;
}
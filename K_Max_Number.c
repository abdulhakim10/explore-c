#include <stdio.h>
#include <limits.h>
int find_max(int a[], int n, int i, int max)
{
    
    if (i == n)
    {
        return max;
    }
    if (a[i] > max)
    {
        max = a[i];
    }
    
    find_max(a, n, i + 1, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = INT_MIN;
    int ans = find_max(a, n, 0, max);
    printf("%d", ans);
    return 0;
}
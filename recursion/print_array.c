#include<stdio.h>

void print_array(int a[], int n, int i)
{
    if (i == n) // base case
    {
        return;
    }
    
    printf("%d\n", a[i]);
    print_array(a, n, i+1);
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
    print_array(a,n,0);
    return 0;
}
#include <stdio.h>
void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
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
    fun(a, n);
    return 0;
}

/**
 * when want to pass array into a function as parameter pass also array size.
 * Array cannot be returned. to return array need dynamic array.
 * if an array is returned, its entire value will not be available, only the first value will be available. because after return the stack memory becomes clean.
 */
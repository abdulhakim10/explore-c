#include<stdio.h>
int main()
{
    // pick the input elements
    int n;
    scanf("%d", &n);
    int a[n];
    // pick the input values
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // pick the index number
    int idx;
    scanf("%d", &idx);
    for (int i = idx; i < n-1; i++)
    {
        a[i] = a[i+1];
    }
    // show the array after remove element
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
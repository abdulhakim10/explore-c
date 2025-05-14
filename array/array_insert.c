#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+1];

    // pick the inputs value
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // pick index and inser value
    int idx, val;
    scanf("%d %d", &idx, &val);

    // insert the value into the given index
    for (int i = n; i >= idx+1; i--)
    {
        a[i] = a[i-1];
    }
    a[idx] = val;
    // print the value after inserting new data
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    


    
    
    return 0;
}
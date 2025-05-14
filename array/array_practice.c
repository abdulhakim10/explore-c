#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int sum = 0; 
    // for(int i = n-1; i >= 0; i--) // reverse
    for (int i = 0; i < n; i++)
    {
        sum += x[i]; // every element sum
    }
    printf("%d", sum);

    // int a[50] = {0}; // declare with initialized, all the element will be 0 value, this will work only fixed size arry.
    
    
    return 0;
}
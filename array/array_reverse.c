#include<stdio.h>
int main()
{
    // pick the input size 
    int n;
    scanf("%d", &n);
    // pick the input elements
    int a [n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // declare two varriables as pointer
    int i = 0; // very first index or start point.
    int j = n-1; // very last index or end point.

    // loop will stop when both come same place or cross each other.
    // while (i < j)
    // {
    //     // swapping values
    //     int tem = a[i]; // declare temporary varriable to ease swap values.
    //     a[i] = a[j];
    //     a[j] = tem;

    //     // move towards to each other
    //     i++;
    //     j--;
    // }
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        // swapping values
        int tem = a[i]; //declare temporary varriable to ease swap values.
        a[i] = a[j];
        a[j] = tem;
    }
    
    //  showing value after reverse
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
        
    return 0;
}
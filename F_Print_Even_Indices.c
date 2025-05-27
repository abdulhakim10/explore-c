#include<stdio.h>
void rec(int n, int a[], int i)
{
    if(i==n){
        return;
    }
    rec(n, a, i+1);
    if(i % 2 == 0){
        printf("%d ", a[i]);
    }
}
int main()
{
    int n, i=0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    rec(n, a, i);
    return 0;
}
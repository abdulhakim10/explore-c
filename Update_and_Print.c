#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[2];
    scanf("%d %d", &b[0], &b[1]);
    
    for (int i = n-1; i >= 0; i--)
    {
        if(b[0] == i){
            a[i] = b[1];
        }
       printf("%d ", a[i]);
    }
    
    
    return 0;
}
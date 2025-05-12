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
    int positive_sum = 0;
    int negative_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > 0){
            positive_sum += a[i];
        }else{
            negative_sum += a[i];
        }
    }
    printf("%d %d", positive_sum, negative_sum);
    
    
    return 0;
}
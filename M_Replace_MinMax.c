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

    int max_idx = 0;
    int min_idx = 0;
    for (int i = 1; i < n; i++)
    {
        if(a[i] < a[min_idx]){
            min_idx = i;
        }else if (a[i] > a[max_idx])
        {
            max_idx = i;
        }
    }


    int tem = a[min_idx];
    a[min_idx] = a[max_idx];
    a[max_idx] = tem;
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[3];
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 3; i++)
    {
        scanf("%d", &x[i]);
    }

    int remain = 0;
    int total_days = 0;

    for (int i = 0; i < 3; i++)
    {
        int farmer = x[0];
        int new_add = x[1];
        int days = x[2];

        total_days = (farmer * days) / (farmer+new_add);
        remain = days - total_days;
    }
    printf("%d\n", remain);
    }
    
    return 0;
}
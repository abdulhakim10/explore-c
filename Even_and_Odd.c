#include<stdio.h>
void odd_even(){
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0){
            odd++;
        }else{
            even++;
        }
    }
    printf("%d %d", even, odd);
}
int main()
{
    odd_even();
    return 0;
}
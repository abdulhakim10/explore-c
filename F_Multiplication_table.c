#include<stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);
    for(int i = 1; i <= 12; i++){
        x = n * i;
        printf("%d %c %d %c %d\n", n, '*', i, '=', x);
    }
    // for(int i = 1; i <= 12; i++){
    //     printf("%d * %d = %d\n", n, i, n*i);
    // }
    return 0;
}

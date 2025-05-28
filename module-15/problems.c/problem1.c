#include<stdio.h>
#include<stdlib.h>
int my_abs(int n){
    return abs(n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", my_abs(n));

    return 0;
}
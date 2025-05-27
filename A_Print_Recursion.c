#include<stdio.h>

void rec(int n, int i)
{
    if(i == n){
        return;
    }
    printf("I love Recursion\n");
    rec(n,i+1);
}

int main()
{
    int n, i=0;
    scanf("%d", &n);
    rec(n,i);
    return 0;
}
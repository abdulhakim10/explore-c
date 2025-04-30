#include<stdio.h>
int main()
{
    // 1. Welcome with Conditons

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if(a >= b){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }

    // 2. Multiples

    // int a,b;
    // scanf("%d %d", &a,&b);

    // if(a % b == 0 || b % a == 0){
    //     printf("Multiples");
    // }else{
    //     printf("No Multiples");
    // }

    // 3. First digit!

    int n;
    scanf("%d", &n);
    n = n % 10;
    if(n % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }

    return 0;
}
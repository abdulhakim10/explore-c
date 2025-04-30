#include <stdio.h>
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

    // int n;
    // scanf("%d", &n);
    // n = n / 1000;
    // if(n % 2 == 0){
    //     printf("Even");
    // }else{
    //     printf("Odd");
    // }

    // Last digit!

    // int n;
    // scanf("%d", &n);
    // n = n % 10;
    // if(n % 2 == 0){
    //     printf("Even");
    // }else{
    //     printf("Odd");
    // }

    // 4. Char

    // char x;
    // scanf("%c", &x);
    // if (x >= 'a' && x <= 'z')
    // {
    //     x = x - 32;
    //     printf("%c", x);
    // }
    // else if (x >= 'A' && x <= 'Z')
    // {
    //     x = x + 32;
    //     printf("%c", x);
    // }

    // 5. Capital or Small or Digit

    // char x;
    // scanf("%c", &x);
    // if(x >= '0' && x <= '9'){
    //     printf("IS DIGIT");
    // } else{
    //     printf("ALPHA\n");
    //     if(x >= 'A' && x <= 'Z'){
    //         printf("IS CAPITAL");
    //     }else{
    //         printf("IS SMALL");
    //     }
    // }

    // 6. Max and Min

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // minimum
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else if (c <= a && c <= b)
    {
        printf("%d ", c);
    }
    // maximum
    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else if (c >= a && c >= b)
    {
        printf("%d", c);
    }

    return 0;
}
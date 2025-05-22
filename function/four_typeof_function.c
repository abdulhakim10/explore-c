#include<stdio.h>

// 1. return + parameter
int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

// 2. return + no parameter
int sum2()
{
    int a,b;
    scanf("%d, %d", &a, &b);
    int ans1 = a + b;
    return ans1;
}

// 3. no return + parameter
void sum3(int a, int b)
{
    int ans = a + b;
    printf("%d", ans);
}

// 4. no return + no parameter
void sum4()
{
    int a,b,
    scanf("%d %d",&a, &b);
    int ans4 = a+b;
    printf("%d", ans4);
}

int main()
{
    sum(10, 5); // calling function with return and parameter.
    sum2(); // calling function with return and no parameter.
    sum3(30, 50); // calling function with no return and parameter.
    sum4(); // calling function with no return and no parameter.
    return 0;
}
#include<stdio.h>
void fun(int* p)
{
     *p = 20;
    // printf("Fun function er x and address: %p\n", &x);
}
int main()
{
    int x = 10;
    fun(&x);
    printf("%d\n", x);
    printf("Main function er x and address: %p\n", &x);
    return 0;
}
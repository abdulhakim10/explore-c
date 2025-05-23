#include<stdio.h>
int main()
{
    int x =10;
    printf("%d\n", x);
    // if want to print location address
    printf("%p\n", &x);

    // pointer variable.
    // If want to store location address value into a variable
    int* ptr;
    ptr = &x;
    printf("%p\n", ptr);


    // dereference
    *ptr = 200;
    printf("%d\n", x);
    return 0;
}
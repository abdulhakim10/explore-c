#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    *(a + 1)= 100; // dereference
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    // printf("%d", *a);
    return 0;
}

// array name is a pointer that stores the location address of 0 index.
// when want to dereference other index just add + 1 with array name (ex: *(a+1) = value)
// + 1 for index 1, +2 for index 2 and goes like this.
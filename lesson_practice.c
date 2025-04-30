#include <stdio.h>
int main()
{
    int sum = 0;

    for(int i = 0; i <= 10; i++ ){
        sum = sum + i;
        printf("%d, %d\n", i, sum);
    }
    return  0;
}
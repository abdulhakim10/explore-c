#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'a' && x < 'z')
    {

        printf("%c", x + 1);
    }else if (x == 'z')
    {
        printf("%c", 'a');
    }
    
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // manual code to concat string
    // int len_a = strlen(a);
    // int len_b = strlen(b);

    // for (int i = 0; i <len_b; i++)
    // {
    //     a[i + len_a] = b[i];
    // }

    // built in function to concat string
    strcat(a,b);

    printf("%s %s", a, b);
    
    return 0;
}
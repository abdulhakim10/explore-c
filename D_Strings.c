#include<stdio.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    printf("%d %d\n", len_a, len_b);

    printf("%s%s\n", a, b);

    char tem = a[0];
    a[0] = b[0];
    b[0] = tem;

    printf("%s %s", a, b);

    return 0;
}
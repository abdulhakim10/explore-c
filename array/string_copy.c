#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a,&b);

    // manual code to copy string
    // int len = strlen(b);
    // for (int i = 0; i < len; i++)
    // {
    //     a[i] = b[i];
    // }

    // built in function to copy string
    strcpy(a,b);

    printf("%s %s", a, b);
    
    return 0;
}
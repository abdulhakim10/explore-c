#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s", &s);

    // made this to get string length.
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }

    // strlen() :built in function to get string length.
    int sz = strlen(s);

    printf("%d %d", count, sz);
    
    return 0;
}
#include<stdio.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    int sum = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     int x = s[i] - '0'; // delete ASCII value. because s[i] is a character
    //     sum += x;
    // }

    
    int length = strlen(s);
    
    for (int i = 0; i < length; i++)
    {
        sum += s[i] - '0';
    }
    
    printf("%d", sum);
    
    return 0;
}
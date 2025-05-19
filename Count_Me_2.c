#include<stdio.h>
int main()
{
    char s[1000001];
    scanf("%s", s);
    int len_s = strlen(s);
    int count = 0;
    for (int i = 0; i < len_s; i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
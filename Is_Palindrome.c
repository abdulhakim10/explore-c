#include<stdio.h>
int is_palindrome(char s[]){
    int len = strlen(s);
    int is_palindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
       if(s[i] != s[j]){
        is_palindrome = 0;
       }
    }
    return is_palindrome;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int palindrome = is_palindrome(s);

    if(palindrome){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}
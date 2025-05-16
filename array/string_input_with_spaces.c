#include<stdio.h>
int main()
{
    char s[50];
    // "%s" specifier for string.
    // scanf() doesn't take space. If space come it stops taking input
    // to take input with space there are two method gets() and fgets().
    // gets(s); // this method take just string variable name. But it is not standard.
    // fgets() method take 3 parameters: 
    // 1. string variable name.
    // 2. string value size with null value.
    // 3. 'stdin' = standard in.
    // fgets() take enter.
    fgets(s, 17, stdin); 
    printf("%s", s);

    return 0;
}
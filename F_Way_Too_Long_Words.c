#include<stdio.h>
int main()
{
    // test case number
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char word[105];
    scanf("%s", &word);
    int length = strlen(word);
    if(length <= 10){
        printf("%s\n", word);
    }else{
        printf("%c%d%c\n", word[0], length-2, word[length -1]);
    }
    }
    

    return 0;
}
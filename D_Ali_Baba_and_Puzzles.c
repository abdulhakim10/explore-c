#include<stdio.h>
int main()
{
    int a, b, c, d = 0;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if(a+b-c == d){
        printf("YES");
    }else if (a+b*c == d)
    {
        printf("YES");
    }else if (a-b*c == d)
    {
        printf("YES");
    }else if (a-b+c == d)
    {
        printf("YES");
    }else if (a*b+c == d)
    {
        printf("YES");
    }else if (a*b-c == d)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
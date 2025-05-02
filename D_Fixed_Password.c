#include<stdio.h>
int main()
{
    int x;
    // while (scanf("%d", &x) != EOF) # EOF = End Of File
    while (scanf("%d", &x)) 
    {
        if(x == 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    
}
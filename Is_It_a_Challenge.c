#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 0){
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        
    }else{
        for (int i = n; i <= 0; i++) { // negative reverse
            printf("%d ", i);
        }
    }
    
    return 0;
}
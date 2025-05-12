// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         if(i % 2 == 0){
//             printf("%d\n", i);
//         }else if(n % 2 != 0)
//         {
//             printf("%d", -1);
//         }
        
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = n; i >= 1; i--)
//     {
//         for(int x = i; x >= 1; x--){
//             printf("%d ", x);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// input: 6
// out put: 
// 6 5 4 3 2 1 
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int x = 0; x <= i; x++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
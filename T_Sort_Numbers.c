#include<stdio.h>
void sort_number(int a, int b, int c){
    int x[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i +1 ; j < 3; j++)
        {
            if(x[i] > x[j]){
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", x[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    
    
    
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort_number(a, b, c);
    return 0;
}
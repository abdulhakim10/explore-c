#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[10001];

    for (int i = 0; i < n; i++)
    {
        int count[3] = {0};
        scanf("%s", &s);
        int len_s = strlen(s);

        for (int i = 0; i < len_s; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                count[0]++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                count[1]++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                count[2]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            printf("%d ", count[i]);
        }
        printf("\n");
    }

    return 0;
}
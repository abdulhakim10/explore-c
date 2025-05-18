#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = malloc(10000001 * sizeof(char));  // allocate large string safely on heap
    int freq[26] = {0}; // frequency array for 'a' to 'z'
    int len = strlen(s);

    scanf("%s", s); // read the string
    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
        // printf("%d\n", s[i]-'a');
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
        
    }
    
    

    
    free(s); // release allocated memory
    return 0;
}

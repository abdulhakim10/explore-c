#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read odd number N (1 <= N <= 21)

    int total_levels = n + 5;                // Total levels of the tree
    int total_width = 2 * total_levels - 1;  // Full width of the tree

    // Print the top part of the tree (pyramid)
    for (int i = 0; i < total_levels; i++) {
        int stars = 2 * i + 1;
        int spaces = (total_width - stars) / 2;

        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the trunk of the tree
    for (int i = 0; i < n; i++) {
        int spaces = (total_width - n) / 2;

        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int x[n];

    long long sum = 0; // Use long long in case of large sums

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        sum += x[i];
    }

    if (sum < 0)
        sum = -sum;

    printf("%lld\n", sum);
    return 0;
}

#include <stdio.h>

long long a[1005];  // Global array to avoid passing it every time

// Recursive function to compute sum
long long sum_fun(int i, int n) {
    if (i == n) return 0;
    return a[i] + sum_fun(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Read array using recursion
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    // Call recursive sum function and print result
    printf("%lld\n", sum_fun(0, n));
    return 0;
}

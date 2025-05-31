#include <stdio.h>
#include <stdlib.h> // for abs()

// Simple bubble sort function for beginners
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read size of array

        int A[1000], B[1000], C[1000];

        // Read array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];  // Copy A to B
        }

        sortArray(B, N);  // Sort B in ascending order

        // Calculate array C
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }

        // Print array C
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");  // Move to next line for next test case
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    // Take the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    // Display the result
    printf("Sum of the first %d terms of the series: %.4f\n", n, sum);

    return 0;
}
// Write a program to calculate the sum of the series:
//  1 + 1/2 + 1/3 + ... + 1/n.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

   
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    printf("Sum of the series up to %d terms: %.2f\n", n, sum);

    return 0;
}


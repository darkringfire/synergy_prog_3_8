#include <iostream>
#include <limits.h>

int main() {
    int n;
    int x, sum = 0;
    int min = INT_MAX, max = INT_MIN;
    printf("Enter amount of numbers (n > 0):");
    scanf("%i", &n);
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            printf("Enter x%i:", i + 1);
            scanf("%i", &x);
            if (x > max) {
                max = x;
            }
            if (x < min) {
                min = x;
            }
            sum += x;
        }
        printf("x_min = %i\n", min);
        printf("x_max = %i\n", max);
        printf("sum(x%i..x%i) = %i\n", 1, n, sum);
        printf("avg(x%i..x%i) = %f\n", 1, n, (float)sum / (float)n);
    } else {
        printf("n should be greater than 0");
    }
}

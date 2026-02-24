#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}

int main() {
    int a = 10, b = 5;
    int sum, diff, prod;

    calculate(a, b, &sum, &diff, &prod);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    return 0;
}
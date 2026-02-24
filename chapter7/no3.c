#include <stdio.h>

int Prime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num = 7;

    if (Prime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
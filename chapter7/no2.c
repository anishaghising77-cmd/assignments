#include <stdio.h>

float Area(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float r = 5;
    printf("A= %.2f\n", Area(r));
    return 0;
}
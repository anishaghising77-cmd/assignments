#include<stdio.h>
int main(){
    float n1, n2, n3, avg, dev1, dev2, dev3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    avg = (n1 + n2 + n3) / 3;
    dev1 = avg - n1;
    dev2 = avg - n2;
    dev3 = avg - n3;
    printf("Average: %.2f\n", avg);
    printf("Deviation:%.2f,%.2f,%.2f\n", dev1, dev2, dev3);
    return 0;
}
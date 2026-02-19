#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5;
    int total;
    float average;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5.0;
    printf("\n student report\n");
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
    return 0;
}
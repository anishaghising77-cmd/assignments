#include<stdio.h>
int main(){
    float price,salvage, life, dep;
    printf("enter purchase price: ");
    scanf("%f", &price);
    printf("enter salvage value: ");
    scanf("%f", &salvage);
    printf("enter useful life: ");
    scanf("%f", &life);
    dep= (price-salvage)/life;
    printf("the straight line depreciation is %f", dep);
    return 0;
}
#include<stdio.h>
int main(){
    
    float si, p, t, r;
    printf("Enter the principal, time, rate: ");
    scanf("%f %f %f", &p,&t,&r);

    si= (p*t*r)/100;  
    printf("The simple interest is= %f", si);
    return 0;
}
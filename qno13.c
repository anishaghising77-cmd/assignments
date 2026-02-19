#include<stdio.h>
int main(){
    int n,i;
    int min, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    min=max=arr[0];
    for(i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }           
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Minimum number is %d\n", min);
    printf("Maximum number is %d\n", max);
    for(i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    printf("the reverse of the array is: ");
     return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

float ctof(float f){
    return (f - 32) * (5.0/9.0);
}

int main(){
    printf("%f\n", ctof(86.2544));
    int n;
    printf("Enter a size, then the elements of an array: ");
    scanf("%d", &n);
    int arr[n];
    
    
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d", arr[i]);
        }
    }
}
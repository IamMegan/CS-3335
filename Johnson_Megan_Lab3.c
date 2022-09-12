#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


int main() {
    int x = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    for(int i = 3; i < x; i+=3){
        sum +=i;
    }
    printf("Sum of all positive multiples of 3 that are less than %d is: %d", x, sum);
}
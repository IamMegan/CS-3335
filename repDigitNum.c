#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    short digitOccurence[10] = {0}; 
    int num;
    printf("Enter a number to process: ");
    scanf("%d", &num);
    
    int nDigits = floor(log10(abs(num))) + 1;
    
    for(int i = 0; i < nDigits; i++){
        digitOccurence[(num%10)]++; //this works??????????
        num /= 10;
    }
    
    printf("Number of occurences: ");
    
    for(int i = 0; i < 10; i++){
        printf("%d ", digitOccurence[i]);
    }
    
    
    return 0;
}

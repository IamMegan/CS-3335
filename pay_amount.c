#include <stdio.h>



void pay_amout(int, int*, int*, int*,int*);

int main()
{
    int dollars, twenties, tens, fives, ones = 0;
    dollars = 60;
    pay_amout(dollars, &twenties, &tens, &fives, &ones);
    printf("twenties: %d\ntens: %d\nfives: %d\nones: %d\n", twenties, tens, fives, ones);

    return 0;
}

void pay_amout(int dollars, int *twenties, int *tens, int *fives, int *ones){
    
    while(dollars > 0){
        if(dollars >= 20){
            dollars -= 20;
            (*twenties)++;
            //*twenties = (*twenties) + 1;
        
        }
        else if(dollars >= 10){
            dollars -= 10;
            *tens = (*tens) + 1;
           
        }
        else if(dollars >= 5){
            dollars -= 5;
            *fives = (*fives) + 1;
            
        }
        else if(dollars>=1){
            dollars -=1;
            *ones = (*ones) + 1;
            
        }
    }
    
}

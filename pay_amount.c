#include <stdio.h>



void pay_amout(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main()
{
    int twenties, tens, fives, ones = 0;
    pay_amout(0, &twenties, &tens, &fives, &ones);
    printf("twenties: %d\ntens: %d\nfives: %d\nones: %d\n", twenties, tens, fives, ones);

    return 0;
}

void pay_amout(int dollars, int *twenties, int *tens, int *fives, int *ones){
    
    while(dollars > 0){
        if(dollars >= 20){
            *twenties++;
            dollars -= 20;
        }
        else if(dollars >= 10){
            *tens++;
            dollars -= 10;
        }
        else if(dollars >= 5){
            *fives++;
            dollars -= 5;
        }
        else{
            *ones++;
            dollars -=1;
        }
    }
    
}

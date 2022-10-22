/*
Program name: pay_amount.c
Programmer: Megan Johnson
Class: CS 3335
HW: 04
Problem: 01
*/

#include <stdio.h>
void pay_amount(int, int*, int*, int*,int*); //Prototype

int main()
{
    int dollars, twenties = 0, tens = 0, fives = 0, ones = 0; //Actual varaibles for storing the dollar values
    dollars = 0; //Raw amount
    
    printf("Enter an ammount to convert: ") 
    scanf("%d", &dollars); //Get input
    pay_amout(dollars, &twenties, &tens, &fives, &ones); 
    printf("twenties: %d\ntens: %d\nfives: %d\nones: %d\n", twenties, tens, fives, ones); //Print output

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    /*
        Logic for conversion, using subraction base change method
        Increments the value of the pointer each time the amount can be subtracted
    */    
    
    while(dollars > 0){ 
        if(dollars >= 20){
            dollars -= 20;
            (*twenties)++;
            
        
        }
        else if(dollars >= 10){
            dollars -= 10;
            (*tens)++;
           
        }
        else if(dollars >= 5){
            dollars -= 5;
            (*fives)++;
            
        }
        else if(dollars>=1){
            dollars -=1;
            (*ones)++;
            
        }
    }
    
}

/*
Program Name: CeaserCipher.c
Programmer: Megan Johnson
Class: CS 3335
HW: 03
Problem: 01
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLEN 80 //future proof for differnet size arrays

int main()
{
    char msg[MAXLEN],c;
    int key;
    printf("Enter a message to encrypt: ");
    fgets(msg, MAXLEN, stdin); // get user input as a mutable string
    printf("Enter a key to shift by: ");
    scanf("%d", &key);
    
    if(key > 26 || key < 26){ //potential error catch
        printf("Key must be within 26");
        return 0;
    }
    
    for(int i = 0; i < MAXLEN; i++){ 
        if(msg[i] > 64 && msg[i] < 91){ // capital letter logic
            if(msg[i] + key > 90){ // if key overflows
                msg[i] = (msg[i] - 26) + key; 
            }
            else if(msg[i] + key < 65){ // if key underflows
                msg[i] = (msg[i] + 26) + key; 
            }
            else{
                msg[i] += key;
            }
            
        }
        if(msg[i] > 96 && msg[i] < 123){ // lower case letter logic
            if(msg[i] + key > 124){ // if key overflows
                msg[i] = (msg[i] - 26) + key;
            }
            else if(msg[i] + key < 97){ // if key underflwos
                msg[i] = (msg[i] + 26) + key;
            }
            else{
                msg[i] += key;
            }
            
        }
    }
    
    printf("%s", msg);
    
    return 0;
}

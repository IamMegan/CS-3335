#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define SIZE 10

/*
Program Name: Project2_Johnson.c
Programmer: Megan Johnson
Class: CS 3335
Project: 02
*/ 


void setBoard(int *); // Sets the human's board, taking user input for the position
void setComputerBoard(int *); // Sets the computer board, using seeded random positions
int playGame(int *, int *); // Main code
void printBoards(int*, int*);// Effective UI code


int main()
{
    
    int hBoard[SIZE] = {0};
    int cBoard[SIZE] = {0};
    srand(time(NULL));
    setBoard(hBoard);
    setComputerBoard(cBoard);
    printf("Boards set!\n"); // Let the user know that the process of setting the boards has completed and the game is ready to play
    printBoards(hBoard, cBoard);
    int winner = playGame(hBoard, cBoard);
    if(winner){
        printf("\nYou hit the enemy!\n");
    }
    else{
        printf("\nYou were hit!\n");
    }
   
    printBoards(hBoard, cBoard);
    return 0;
}

void setBoard(int *hBoard){
    int n = 0;
    printf("Welcome to 1D battleship!\nSelect a location between 0 and 9 to place your ship: ");
    scanf("%d", &n);
    hBoard[n] = 1;
    
    
}

void setComputerBoard(int* cBoard){
    
    cBoard[rand() % 10] = 1;
}

int playGame(int *hBoard, int *cBoard){
    int cshot;
    int hshot;
    int winner;
    
    while(1){   /* 
                Infinite loop is intentional, will only break when a hit is detected.
                Uses different numbers to represent different elements 
                0 = empty spot, 1 = Ship, 2 = Miss, 3 = Hit
                When a ship is hit, that is, when one of the shot variables is at where a ship is, the position is set to 3, HIT! is printed, and the look breaks.
                */
        cshot = rand() % 10;
       
        printf("\nComputer is playing...\n");
        if(hBoard[cshot] == 1){
            winner = 0;
            hBoard[cshot] = 3;
            printf("HIT!\n");
            break;
           
        }
        else{
            hBoard[cshot] = 2;
            printf("MISS! Guess: %d\n", cshot);
            printBoards(hBoard, cBoard);
        }
        printf("\nEnter a position to fire at: ");
        scanf("%d", &hshot);
        if(cBoard[hshot] == 1){
            winner = 1;
            cBoard[hshot] = 3;
            printf("HIT!\n");
            break;
        }
        else{
            cBoard[hshot] = 2;
            printf("MISS!\n");
            printBoards(hBoard, cBoard);
           
        }
        
    }
    
    return winner;
    
    
}

void printBoards(int *hBoard, int *cBoard){
    
    //Prints based on what number is in the Array. The vertical bars are for ease of reading.
    printf("        |");
    for(int i = 0; i < SIZE; i++){
        printf(" %d |",i);
    }
    
    printf("\n");
    printf("HBoard: |");
    for(int  i = 0; i < SIZE; i++){
        if(hBoard[i] == 0){
            printf(" * |");
        }
        else if(hBoard[i] == 1){
            printf(" S |");
        }
        else if(hBoard[i] == 2){
            printf(" M |");
        }
        else if(hBoard[i] == 3){
            printf(" H |");
        }
        
    }
    printf("\n");
    printf("CBoard: |");
    for(int  i = 0; i < SIZE; i++){
        if(cBoard[i] == 0 || cBoard[i] == 1){
            printf(" * |");
        }
        else if(cBoard[i] == 2){
            printf(" M |");
        }
        else if(cBoard[i] == 3){
            printf(" H |");
        }
        
    }
    printf("\n");
}

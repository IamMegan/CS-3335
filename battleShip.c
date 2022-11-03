#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define SIZE 10

void setBoard(int *);
void setComputerBoard(int *);
int playGame(int *, int *);
void printBoards(int*, int*);


int main()
{
    
    int hBoard[SIZE] = {0};
    int cBoard[SIZE] = {0};
    srand(time(NULL));
    setBoard(hBoard);
    setComputerBoard(cBoard);
    printf("Boards set!");
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
    
    while(1){
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
        
        //printf(" %d |", hBoard[i]);
    }
    printf("\n");
    printf("CBoard: |");
    for(int  i = 0; i < SIZE; i++){
        if(cBoard[i] == 0 || cBoard[i] == 1){
            printf(" * |");
        }
        // else if(cBoard[i] == 1){
        //     printf(" S |");
        // }
        else if(cBoard[i] == 2){
            printf(" M |");
        }
        else if(cBoard[i] == 3){
            printf(" H |");
        }
        //printf(" %d |", cBoard[i]);
    }
    printf("\n");
}

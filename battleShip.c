#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10

void setBoard(int *);
void setComputerBoard(int *);
int playGame(int *, int *);
//Test function
void printBoards(int*, int*);

int main()
{
    
    int hBoard[SIZE] = {0};
    int cBoard[SIZE] = {0};
    setBoard(hBoard);
    setComputerBoard(cBoard);
    int winner = playGame(hBoard, cBoard);
    //printBoards(hBoard, cBoard);
   
    
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
    int flag = true;
    int winner;
    while(flag){
        cshot = rand() % 10;
        if(hBoard[cshot] == 1){
            printf("HIT!\n");
            winner = 0;
            flag = false;
        }
        else{
            printf("MISS! Guess: %d\n", cshot);
            
        }
        printf("Enter a position to fire at: ");
        scanf("%d\n", &hshot);
        if(cBoard[hshot] == 1){
            printf("HIT!\n");
            winner = 1;
            flag = false;
        }
        else{
            printf("MISS!\n");
        }
    }
    
    
    if(winner){
        printf("You win!");
    }
    else{
        printf("You lose");
    }
    
}

// void printBoards(int *hBoard, int *cBoard){
//     printf("|");
//     for(int  i = 0; i < SIZE; i++){
//         printf(" %d |", hBoard[i]);
//     }
//     printf("\n");
//     printf("|");
//     for(int  i = 0; i < SIZE; i++){
//         printf(" %d |", cBoard[i]);
//     }
    
// }

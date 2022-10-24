#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 10


int hBoard[SIZE] = {0};
int cBoard[SIZE] = {0};

void setBoard(int *);
void setComputerBoard(int *);
int playGame(int *, int *);
//Test function
void printBoards();

int main()
{
    int loc = 0;
    int n = 0;
    
    printf("Welcome to 1D battleship!\nSelect a location between 0 and 9 to place your ship: ");
    scanf("%d", &loc);
    setBoard(&loc);
    setComputerBoard(&n);
    printBoards();
   
    
    return 0;
}

void setBoard(int *loc){
    hBoard[*loc] = 1;
}

void setComputerBoard(int* n){
    
    cBoard[rand() % 10] = 1;
}

void printBoards(){
    printf("|");
    for(int  i = 0; i < SIZE; i++){
        printf(" %d |", hBoard[i]);
    }
    printf("\n");
    printf("|");
    for(int  i = 0; i < SIZE; i++){
        printf(" %d |", cBoard[i]);
    }
    
}


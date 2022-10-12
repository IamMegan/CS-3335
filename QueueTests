#include <stdio.h>
#include <stdbool.h>
#define N 10 

int queue[N];
int front = -1;
int rear = -1;

bool isEmpty(){
    if(front == -1 && rear == -1)
        return true;
    return false;
}

void enQueue(int n){
    if(isEmpty()){
        front = 0;
        rear = 0;
    }
    else{
        rear = (rear + 1) % N;
    }
    
    queue[rear] = n;
}

void deQueue(){
    // if(isEmpty)
    //     return;
    // else if(front == rear){
    //     front = -1;
    //     rear = -1;
    // }
    queue[front] = 0;
    front = (front - 1) % N;
}

int Front(){
    return queue[front];
}


//Test Method
void printQueue(){
    printf("| ");
    for(int i = 0; i < N; i++){
        printf("%d | ", queue[i]);
    }
    printf("\n");
}

int main()
{
    enQueue(5);
    enQueue(7);
    printQueue();
    deQueue();
    printQueue();
    enQueue(8);
    printQueue();
    
    return 0;
}

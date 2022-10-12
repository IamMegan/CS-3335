#include <stdio.h>
#include <stdbool.h>
#define N 10

double map[N];
int key[N];
int count = 0;

int getKey(int i);
int put(int k, int m);

void printArrs();

int main()
{
    put(5,32.2);
    put(6,33.5);
    put(2,24.3);
    printArrs();
    
    return 0;
}

int put(int k, int m){
    key[count] = k;
    map[count] = m;
    count++;
    
}

int getKey(int k){
     
}

void printArrs(){
    printf("Key values: | ");
    for(int i = 0; i < N; i++){
        printf("%d | ", key[i]);
    }
    printf("\n");
    printf("Map data: | ");
    for(int i = 0; i < N; i++){
        printf("%.1f | ", map[i]);
    }
}



/*
Program Name: Project3.c
Programmer: Megan Johnson
Class: CS 3335
Project: 01
*/ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Point{
  int x;
  int y;
}Point;

typedef struct Line{
 Point a;
 Point b;
 float Length;
}Line;


struct Line * readFile(char file_name[], int *n);
void computeLengths(struct Line *lines, int n);
void saveLengths(struct Line *lines, int n);
void printStats(struct Line *lines, int n);

int main(int argc, char argv[]){
    int n;
    
    
    return 0;
}

struct Line * readFile(char file_name[], int *n){
    FILE *fp = fopen(file_name, "r");
    
    if(!fp){
        //exit("File not found!");
    }
    
    fscanf(fp, "%d", n);
    
    Line *lines = calloc(*n, sizeof(Line));
    
    for(int i = 0; i < *n; i++){
        fscanf(fp, "%d %d %d %d", &(lines + i)->a.x, &(lines + i)->a.y, &(lines + i)->b.x, &(lines + i)->b.y);
    }
    
    return lines; //TODO
}

void computeLengths(struct Line *lines, int n){
    for(int i = 0; i < n; i++){
        (lines + i)->Length = sqrt(((lines + i)->b.y - (lines + i)->a.y) + (lines + i)->b.x - (lines + i)->a.x);
    }
}

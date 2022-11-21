/*
Program Name: Project3.c
Programmer: Megan Johnson
Class: CS 3335
Project: 01
*/ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  int x;
  int y;
}Point;

typedef struct{
 Point a;
 Point b;
 float Length;
}Line;


struct Line *readFile(char file_name[], int *n);
void computeLengths(struct Line *lines, int n);
void saveLengths(struct Line *lines, int n);
void printStats(struct Line *lines, int n);

int main(int argc, char argv[]){
    return 0; 
}

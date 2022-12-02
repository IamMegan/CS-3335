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
#include <limits.h>

//Type definitions for structs
typedef struct Point{
  int x;
  int y;
}Point;

typedef struct Line{
 Point a;
 Point b;
 float Length;
}Line;

//Prototypes of functions
struct Line * readFile(char file_name[], int *n);
void computeLengths(struct Line *lines, int n);
void saveLengths(struct Line *lines, int n);
void printStats(struct Line *lines, int n);


int main(int argc, char argv[]){
    int n;
    Line *lines = readFile("Lines.txt", &n);
    computeLengths(lines, n);
    saveLengths(lines, n);
    printStats(lines, n);
    free(lines);
    return 0;
}

//Opens and reads the line data from file, returns an array of structs
struct Line * readFile(char file_name[], int *n){
    FILE *fp = fopen(file_name, "r");
    
    if(!fp){
        exit(1);
    }
    
    fscanf(fp, "%d", n);
    //Allocates a perfect sized array for the created Structs
    Line *lines = calloc(*n, sizeof(Line));
    printf("Array of size %d created.\n", *n);
        
    for(int i = 0; i < *n; i++){
        fscanf(fp, "%d %d %d %d", &(lines + i)->a.x, &(lines + i)->a.y, &(lines + i)->b.x, &(lines + i)->b.y);
    }
    printf("Data Saved.\n");
    return lines;
}
//Computes the lengths of the lines by using the distance formula
void computeLengths(struct Line *lines, int n){
    printf("Computing lengths...\n");
    for(int i = 0; i < n; i++){
        (lines + i)->Length = sqrt(pow(((lines + i)->b.y - (lines + i)->a.y),2) + pow(((lines + i)->b.x - (lines + i)->a.x),2));
    }
    printf("Length Computed\n");
}
//Prints the lengths to a file.
void saveLengths(struct Line *lines, int n){
    printf("Saving lengths...\n");
    FILE *outFile = fopen("lengths_Johnson_Megan.txt", "w+");
    for(int i = 0; i < n; i++){
        fprintf(outFile,"%0.1f\n",(lines + i)->Length);
    }
    printf("Lengths Saved\n");
}
//Prints various statistics to the terminal
void printStats(struct Line *lines, int n){
    float maxLine = 0;
    float minLine = INT_MAX;
    float avg = 0;
    for(int i = 0; i < n; i++){
       if((lines + i)->Length > maxLine)
            maxLine = (lines + i)->Length;
    }  
    
    for(int i = 0; i < n; i++){
        if((lines + i)->Length < minLine)
            minLine = (lines + i)->Length;
    }  
    
    for(int i = 0; i < n; i++){
       avg += (lines + i)->Length; 
    }  
    
    
    printf("Max Length = %0.1f\nMin Length = %0.1f\nAverage Length = %0.1f\n",maxLine,minLine,avg/n);

}


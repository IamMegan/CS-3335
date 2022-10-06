/*
Program Name: PRN.c
Programmer: Megan Johnson
Class: CS 3335
HW: 03
Problem: 02
*/ 


#include <stdio.h>
#include <ctype.h>

//Stack implementation
int stack[50];
int count = 0;
void push(int n){
    stack[count] = n;
    count++;
}

int pop(){
    int res = stack[count-1];
    count--;
    return res;
}

int main()
{
    char op;
    int a,b;
    
    printf("Enter a statment: ");
    
    //input processing
    while(op != '='){
        op = getchar();
        if(isdigit(op)){
            push(op - '0'); // process integers
        }
        else{
            switch(op){ //process opperands 
                case '+' :
                    a = pop();
                    b = pop();
                    push(a+b);
                    break;
                case '-' :
                    b = pop();
                    a = pop();
                    push(a-b);
                    break;
                case '*' :
                    a = pop();
                    b = pop();
                    push(a*b);
                    break;
                case '/' :
                    b = pop();
                    a = pop();
                    push(a/b);
                    break;
                case '=' :
                    printf("%d", pop()); //end and display result
                    break;
            }
        }
        
    }
    return 0;
}

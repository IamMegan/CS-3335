/*
Program name: ispalindrome
Programmer: Megan Johnson
Class: 3335
HW: 04
Problem: 02
*/

#include <stdio.h>
#include <ctype.h>
#define N 50
int main()
{
    char arr[N];
    int size = 0;
    int num = 0;
    char *pb;
    char *pe;
    

    // Get user input
    printf("Enter a string: \n");
    int c;
    while((c = getchar()) != '\n'){
        if(isalpha(c)){
            arr[num] = tolower(c);
            num++;
            size++;
        }
    }
    /*
        Logic. Uses pointer shit to check for palindrome
        Breaks if one set doesn't match, otherwise, continues until the start is past the end.
    */
    pb = arr;
    pe = arr + size - 1;
    while(pb <= pe){
            if(*pb == *pe){
                pb++;
                --pe;
            }
            else{
                break;
            }
        }
    
    // Print output
    if(pb >= pe){
        printf("true");    
    }
    else{
        printf("false");
    }
    

    return 0;
}

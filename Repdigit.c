/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    int digit;
    long n = 4567;
    
    while(n>0){
        digit = n%10;
        if(digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }
    
    if(n>0)
        printf("Repdigit\n");
    else
        printf("No Repdigit\n");
    
    return 0;
}

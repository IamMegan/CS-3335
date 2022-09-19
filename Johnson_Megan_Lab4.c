/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a num: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++){
        for(int k = num-1; k >=i; k--){
            printf(".");
        }
        for(int j = 1; j <= i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

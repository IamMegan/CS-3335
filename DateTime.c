/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mon1, mon2, day1, day2, year1, year2;
    printf("Enter a month, day, year in the mm/dd/yyyy format: ");
    scanf("%d/%d/%d/", &mon1,&day1,&year1);
    printf("Enter a month, day, year in the mm/dd/yyyy format: ");
    scanf("%d/%d/%d/", &mon2,&day2,&year2);
    if(mon1 > 12 || mon2 > 12 ||  day1 > 31 || day2 > 31){
        printf("Invalid date/year!");
    }
    else{
        
    }
}

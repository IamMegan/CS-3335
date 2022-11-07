#include <stdio.h>
#include <string.h>
#define STRSIZE 80
int main()
{
    char input[STRSIZE + 1];
    printf("Enter a string to censor: ");
    fgets(input, STRSIZE + 1, stdin);
    char *arrptr = input;
    for(; *arrptr != '\0'; arrptr++){
        if(*arrptr == 'f' && *(arrptr + 1) == 'o' && *(arrptr + 2) == 'o'){
                *arrptr = 'x';
                *(arrptr + 1) = 'x';
                *(arrptr + 2) = 'x';
            }
        }
    puts(input);

    return 0;
}

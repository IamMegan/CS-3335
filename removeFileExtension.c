#include <stdio.h>
#include <string.h>
#define STRSIZE 100

void removeFileName(char *url);

int main()
{
    
    char url[STRSIZE + 1];
    printf("Enter a url to chang: ");
    fgets(url, STRSIZE + 1, stdin);
    removeFileName(url);
    puts(url);
    
    
}

void removeFileName(char *url){
    
    int index = (int)((strrchr(url, '/')) - url);
    
    for(int i = index; i <= STRSIZE; i++){
        *(url + i) = 0;
    }
    
}

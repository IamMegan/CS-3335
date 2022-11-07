#include <stdio.h>
#include <string.h>
#define STRSIZE 80

void extract_extension(const char *filename, char *extension);

int main()
{
    
    char filename[STRSIZE + 1];
    char extension[STRSIZE + 1];
    printf("Enter a file name: ");
    fgets(filename, STRSIZE + 1, stdin);
    extract_extension(filename, extension);
    printf("%s", extension);
    
}

void extract_extension(const char *filename, char *extension){
    
   
    
    int index = (int)((strchr(filename, '.')) - filename);
    
    for(int i = index; i <= STRSIZE; i++){
        *extension = *(filename + i);
        extension++;
    }
    
    
    // for(; *arrptr != '\0'; arrptr++){
    //     if(*arrptr == '.'){
            
    //     }
    // }
    
}

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
    
    printf("Enter a string: \n");
    int c;
    while((c = getchar()) != '\n'){
        if(isalpha(c)){
            arr[num] = tolower(c);
            num++;
            size++;
        }
    }
    
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
    
    
    if(pb >= pe){
        printf("true");    
    }
    else{
        printf("false");
    }
    

    return 0;
}

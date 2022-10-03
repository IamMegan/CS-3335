#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLEN 80
int main()
{
    char msg[MAXLEN],c;
    int key;
    printf("Enter a message to encrypt: ");
    fgets(msg, MAXLEN, stdin);
    printf("Enter a key to shift by: ");
    scanf("%d", &key);
    
    
    for(int i = 0; i < MAXLEN; i++){
        if(msg[i] > 64 && msg[i] < 91){
            if(msg[i] + key > 90){
                msg[i] = (msg[i] - 26) + key;
            }
            else{
                msg[i] += key;
            }
            
        }
        if(msg[i] > 96 && msg[i] < 123){
            if(msg[i] + key > 124){
                msg[i] = (msg[i] - 26) + key;
            }
            else{
                msg[i] += key;
            }
            
        }
    }
    
    printf("%s", msg);
    
    return 0;
}

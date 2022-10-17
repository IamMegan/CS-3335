#include <stdio.h>


///Get help
void splitTime(long totalSec, int* hr, int* min, int* sec);

int main()
{
    int totalSec, hr, min, sec;
    
    printf("Enter total seconds since midnight: ");
    scanf("%d \n", &totalSec);
    splitTime(totalSec, &hr, &min, &sec);
    printf("hrs: %d\n mins: %d\n secs: %d\n", hr, sec, min);
    return 0;
}

void splitTime(long totalSec, int* hr, int* min, int* sec){
    while(totalSec > 0){
        if(totalSec > 3600){
            *hr += 1;
            totalSec -= 3600;
        }
        else if(totalSec > 60){
            *min += 1;
            totalSec -= 60;
        }
        else{
            sec += totalSec;
            break;
        }
            
    }
   
}

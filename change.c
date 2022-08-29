#include <stdio.h>

int main()
{
    
    int answer = 0;
    int bill50 = 0;
    int bill20 = 0;
    int bill10 = 0;
    int bill5 = 0;
    int bill1 = 0;
    
    printf("Enter a number to convert: ");
    scanf("%d",&answer);
        
        while(answer > 0){
            if(answer >= 50){
                answer-=50;
                bill50++;
            }
            
            else if(answer >= 20){
                answer-=20;
                bill20++;
            }
            
            else if(answer >= 10){
                answer-=10;
                bill10++;
            }
            
           else if(answer >= 5){
                answer-=5;
                bill5++;
            }
            
            else if(answer >= 1){
                answer-=1;
                bill1++;
            }
        }
        
    printf("Conversion is:\n$50: %d\n$20: %d\n$10: %d\n$5: %d\n$1: %d\n", bill50, bill20, bill10, bill5,bill1);
        
    return 0;
}

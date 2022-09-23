#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool checkYear(int year){
    if (year % 400 == 0){
        return true;
    }
    if (year % 100 == 0){
        return false;
    }
    if (year % 4 == 0){
        return true;
    }
    return false;
}

int main()
{
    int mon1, mon2, day1, day2, year1, year2;
    int daysInRegYear[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int daysInLeapYear[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int totDays = 0;
    printf("Enter a month, day, year in the mm/dd/yyyy format: ");
    scanf("%d/%d/%d/", &mon1,&day1,&year1);
    
    if(mon1 > 12 ||  day1 > 31){
        printf("Invalid date/year!\n");
    }
    
    else{
        printf("Enter a month, day, year in the mm/dd/yyyy format: ");
        scanf("%d/%d/%d/", &mon2,&day2,&year2);
    
        if(mon2 > 12 ||  day2 > 31){
            printf("Invalid date/year!\n");
        }
        
        else{
            if(year1 > year2){
                printf("The second date must be after the first.");
            }
            else{
                for(int i = year1; i <= year2; i++){
                    for(int j = mon1 - 1; j < 13; j++){
                     if(checkYear(i)){
                         totDays += daysInLeapYear[j];
                     }
                     else{
                         totDays += daysInRegYear[j];
                     }
                }
                
            }
            
        }
    }
    
    printf("%d\n", totDays);
    
}
    return 0;
}

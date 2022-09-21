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

int totDaysInYears(int year){
    
}

int main()
{
    int mon1, mon2, day1, day2, year1, year2;
    int daysInMonth[] = {0};
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
            int totDays = 0;
            
            
        }
    }
    
}
    

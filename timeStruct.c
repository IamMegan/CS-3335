#include <stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

int convert_to_sec(struct time time1);
struct time find_earlier(struct time time1, struct time time2);


int main()
{
    struct time time1;
    struct time time2;
    
    printf("Enter time 1 in 24 hour format, of format HH:MM:SS : ");
    scanf("%d:%d:%d", &time1.hour, &time1.min, &time1.sec);
    printf("Enter time 2 in 24 hour format, of format HH:MM:SS : ");
    scanf("%d:%d:%d", &time2.hour, &time2.min, &time2.sec);
    printf("Number of seconds in time 1: %d\n", convert_to_sec(time1));
    printf("Earlier time: %d:%d:%d", find_earlier(time1,time2).hour, find_earlier(time1,time2).min, find_earlier(time1,time2).sec);
    
    
    //printf("%d:%d:%d, %d:%d:%d", time1.hour, time1.min, time1.sec, time2.hour, time2.min, time2.sec);
    return 0;
}

int convert_to_sec(struct time time1){
    
    return (time1.hour)*3600 + (time1.min)*60 + time1.sec;
    
}

struct time find_earlier(struct time time1, struct time time2){
    if(convert_to_sec(time1) < convert_to_sec(time2)){
        return time1;
    }
    else{
        return time2;
    }
    
}

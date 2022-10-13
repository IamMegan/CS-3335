#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int i = 5;
    int j = 6;
    swap(&i, &j);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    
    return 0;
}

void swap(int *p, int *q){
    
    int t = *p;
    *p = *q;
    *q = t;
    
}

#include <stdio.h>
#include <math.h>

double compute_inner_sq_diff(double *a, double *b, int n){
    double sum = 0;
    int i = 0;
    while(i < n){
        sum += pow((*a) - (*b), 2);
        a++;
        b++;
        i++;
    }
    return sum;
}

int main()
{
    
    int n = 0;
    printf("Enter a size: ");
    scanf("%d",&n);
    double a[n];
    double b[n];
    printf("Enter values for a: ");
    for(int i = 0; i < n; i++){
        scanf("%lf",&a[i]);
    }
    printf("Enter values for b: ");
    for(int i = 0; i < n; i++){
        scanf("%lf",&b[i]);
    }
    
    double sum = compute_inner_sq_diff(a, b, n);
    printf("Inner product: %lf", sum);
    
    
    return 0;
}


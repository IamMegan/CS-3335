#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int studentGrades[5][5] = {{95,96,87,88,97},{58,73,46,82,91},{14,87,88,91,21},{98,87,73,64,55},{45,62,38,44,55}}; //Each element is a student and their respective grade.
    double totAvg;
    double classAvgOfEachTest;
    for(int i = 0; i < 5; i++){
       for(int j = 0; j < 5; j++){
           totAvg += studentGrades[i][j];
       }
    }
    totAvg /= 25.0;
    printf("Total Average: %.2f\n", totAvg);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            classAvgOfEachTest += studentGrades[i][j];
        }
        classAvgOfEachTest /= 5.0;
        printf("Average for test %d: %.2f\n",i+1,classAvgOfEachTest);
    }
    
    return 0;
}

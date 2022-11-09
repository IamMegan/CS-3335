#include <stdio.h>
#include <string.h>
#define STRSIZE 80


struct Books{
    char bookName[STRSIZE + 1];
    char authorName[STRSIZE + 1];
    int numCopies;
    
};

void bookInput(struct Books *books, int n);
void printBooks(struct Books *books, int n);
void mostBooks(struct Books *books, int n);
void clearStream();

int main()
{
    int n;
    struct Books books[n];
    printf("Enter the size of the Library: ");
    scanf("%d", &n);
    bookInput(books, n);
    printBooks(books, n);
    mostBooks(books, n);
    return 0;
}

void bookInput(struct Books *books, int n){
    for(int i = 0; i < n; i++){
        clearStream();
        printf("\nEnter the title of book %d: ", i + 1);
        fgets(books[i].bookName, STRSIZE + 1, stdin);
        printf("Enter the author of book %d: ", i + 1);
        fgets(books[i].authorName, STRSIZE + 1, stdin);
        printf("Enter the number of book %d: ", i + 1);
        scanf("%d",&books[i].numCopies);
        
    }
    
}

void printBooks(struct Books *books, int n){
    for(int i = 0; i < n; i++){
        printf("\n");
        printf("Title of book %d: %s", i + 1, books[i].bookName);
        printf("Author of book %d: %s", i + 1, books[i].authorName);
        printf("Number of copies of book %d: %d\n", i + 1, books[i].numCopies);
    }
}

void mostBooks(struct Books *books, int n){
    int max = 0;
    int indexOfMax = 0;
    for(int i = 0; i < n; i++){
        if(books[i].numCopies > max){
            max = books[i].numCopies;
            indexOfMax = i;
        }
    }
    
    printf("Most books is: %s, with %d books.", books[indexOfMax].bookName, max);
}

void clearStream(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

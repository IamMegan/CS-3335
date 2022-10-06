#include <stdio.h>
#include <ctype.h>

int stack[50];
int count = 0;
void push(int n){
    stack[count] = n;
    count++;
}

int pop(){
    int res = stack[count-1];
    count--;
    return res;
}

int main()
{
    char op;
    int a,b;
    
    printf("Enter a statment: ");
    
    while(op != '='){
        op = getchar();
        if(isdigit(op)){
            push(op);
        }
        else{
            switch(op){
                case '+' :
                    a = pop();
                    b = pop();
                    push(a+b);
                    break;
                case '-' :
                    a = pop();
                    b = pop();
                    push(a-b);
                    break;
                case '*' :
                    a = pop();
                    b = pop();
                    push(a*b);
                    break;
                case '/' :
                    a = pop();
                    b = pop();
                    push(a/b);
                    break;
                case '=' :
                    printf("%d", stack[count]);
                    break;
            }
        }
        
    }
    return 0;
}

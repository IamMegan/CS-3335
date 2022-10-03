#include <stdio.h>
#include <ctype.h>

int stack[50];
int count = 0;
void push(int n){
    stack[count++] = n;
}

int pop(){
    int res = stack[--count];
    return res;
}

int main()
{
    char op;
    int n, a, b;
    while(op != '=')
    {
        if(scanf("%d",&n)){
            push(scanf("%d",&n));
            
        }
        else{
            scanf("%c", &op);
            switch(op){
                case '+' :
                    a = pop();
                    b = pop();
                    push(a+b);
                break;
                case '-' :
                break;
                case '*' :
                break;
                case '/' :
                break;
                }
            }
    }
    printf("%d",stack[count]);
    return 0;  
}
    

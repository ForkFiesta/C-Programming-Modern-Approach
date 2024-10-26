#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


#define STACK_SIZE 100

char contents[STACK_SIZE];
int top=0;
bool balanced = false;

void stack_overflow(void){
    printf("stack overflow\n");
    exit(1);
}

void stack_underflow(void){
    printf("stack underflow\n");
    balanced = false;
}

void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return (top == 0);
}

bool is_full(void){
    return (top==STACK_SIZE);
}

void push(char element){
    if(is_full()){
        stack_overflow();
    }else{
        contents[top] = element;
        top++;
    }
}

char pop(void){
    if(is_empty()){
        stack_underflow();
        return '\0';
    }else{
        return contents[--top];
    }
}


int main(){
    char ch;
    printf("Enter a series of parentheses and/braces '({()})': ");
    while((ch=getchar())!= '\n'){
        if(ch == '{' || ch == '('){
            push(ch);
        }
        else if (ch == '}' || ch ==')'){
            char test = pop();
            if ((ch == '}' && test != '{') || (ch == ')' && test != '(')) balanced = false;
            else{
                balanced = true;
            }
            
        }else{
            printf("Not a valid character\n");
            printf("Exiting program with Error: 1\n");
            exit(1);
        }
    }
   

    if (balanced && is_empty()){
        printf("Parentheses/braces are nested properly\n");
    }else{
        printf("Parentheses/braces are not nested properly.\n");
    }
    
}
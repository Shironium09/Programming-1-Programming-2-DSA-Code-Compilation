//arrayStack.h

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10 

typedef struct {

  char elems[MAX];
  int top; 

} Stack;

bool isEmpty (Stack* S){
    return S->top == -1;
}

bool isFull (Stack* S){

    return S->top == MAX;
}
void init(Stack* S){
    S = (Stack*) malloc(sizeof(Stack));
    (S)->top = -1;
    
}


void push (Stack* S, char data){
    if (isFull(S)){
        printf("Stack is full!");
    } else { 
        (S)->elems[++S->top] = data; 
    }
}

void pop (Stack* S){
    if (isEmpty(S)){
        printf("Stack is empty!");   
    } else {
        (S)->top--;
    }
}

char top (Stack* S){
    if (isEmpty(S)){
        printf("Stack is empty!");   
        return '\0';
    } else {
        return (S)->elems[(S)->top];
    }
}

void printStack (Stack* S){
    for (int i = S->top; i >= 0; i--){
        printf("%c", S->elems[i]);
    }
}

#endif
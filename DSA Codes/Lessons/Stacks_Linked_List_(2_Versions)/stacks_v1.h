<<<<<<< HEAD
#ifndef stacks_v1
#define stacks_v1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{

    int elem;
    struct node *link;

}*List;

typedef struct{

    List top;

}Stack;

void initStack(Stack *S){

    S->top = NULL;

}

void Push(Stack *S, int toAdd){

    List newNode = (List)malloc(sizeof(struct node));

    if(newNode != NULL){

        newNode->elem = toAdd;
        newNode->link = S->top;
        S->top = newNode;

    }else{

        printf("Error Allocating Space!");

    }

}

void Pop(Stack *S){

    List temp = S->top;

    S->top = temp->link;
    free(temp);

}

bool Empty(Stack S){

    return S.top == NULL;

}

void display(Stack S){

    for(; S.top != NULL; S.top = S.top->link){

        printf("%d -> ", S.top->elem);

    }

    printf("NULL\n");

}

=======
#ifndef stacks_v1
#define stacks_v1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{

    int elem;
    struct node *link;

}*List;

typedef struct{

    List top;

}Stack;

void initStack(Stack *S){

    S->top = NULL;

}

void Push(Stack *S, int toAdd){

    List newNode = (List)malloc(sizeof(struct node));

    if(newNode != NULL){

        newNode->elem = toAdd;
        newNode->link = S->top;
        S->top = newNode;

    }else{

        printf("Error Allocating Space!");

    }

}

void Pop(Stack *S){

    List temp = S->top;

    S->top = temp->link;
    free(temp);

}

bool Empty(Stack S){

    return S.top == NULL;

}

void display(Stack S){

    for(; S.top != NULL; S.top = S.top->link){

        printf("%d -> ", S.top->elem);

    }

    printf("NULL\n");

}

>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
#endif
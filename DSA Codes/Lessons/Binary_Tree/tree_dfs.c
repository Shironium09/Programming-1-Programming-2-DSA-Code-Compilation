#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_MAX 20

typedef struct cell{

    int elem;
    struct cell *LC;
    struct cell *RC;

}ctype, *BST;

typedef struct stack{

    BST elems[STACK_MAX];
    int top;

}Stack;

void push(Stack *S, BST x){

    S->elems[S->top++] = x;

}

void pop(Stack *S){

    S->top--;

}

bool isEmpty(Stack S){

    return S.top == 0;

}

void dfs(BST T){

    Stack S;
    S.top = 0;

    push(&S, T);

    while(!isEmpty(S)){

        BST curr = S.elems[S.top - 1];

        pop(&S);

        printf("%d ", curr->elem);

        if(curr->RC != NULL){

            push(&S, curr->RC);

        }
        
        if(curr->LC != NULL){

            push(&S, curr->LC);

        }

    }

}

int insert(BST* T, int elem){

    BST *trav;
    for(trav = T; *trav != NULL && (*trav)->elem != elem;){

        trav = (elem < (*trav)->elem) ? &(*trav)->LC : &(*trav)->RC;

    }

    if(*trav == NULL){

        BST newNode = (BST)malloc(sizeof(struct cell));
        newNode->elem = elem;
        newNode->LC = NULL;
        newNode->RC = NULL;

        *trav = newNode;

    }

}

void preorderTraversal(BST T){

    if(T != NULL){

        printf("%d ", T->elem);
        preorderTraversal(T->LC);
        preorderTraversal(T->RC);

    }

}

void inorderTraversal(BST T){

    if(T != NULL){

        inorderTraversal(T->LC);
        printf("%d ", T->elem);
        inorderTraversal(T->RC);

    }

}

void postorderTraversal(BST T){

    if(T != NULL){

        postorderTraversal(T->LC);
        postorderTraversal(T->RC);
        printf("%d ", T->elem);

    }

}

void initTree(BST* T){

    *T = NULL;

}

void populateTree(BST *T){

    int arr[] = {10, 5, 14, 12, 7, 18, 15};

    for(int i = 0; i < 7; i++){

        insert(T, arr[i]);

    }

}

int main(){

    BST S;

    initTree(&S);
    populateTree(&S);

    dfs(S);


return 0;
}
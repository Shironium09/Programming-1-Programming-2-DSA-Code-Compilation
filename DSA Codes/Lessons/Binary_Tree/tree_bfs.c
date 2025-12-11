#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define QUEUE_MAX 20

typedef struct cell{

    int elem;
    struct cell *LC;
    struct cell *RC;

}ctype, *BST;

typedef struct queue{

    BST elems[QUEUE_MAX];
    int rear;
    int front;

}Queue;

void Enqueue(Queue*Q, BST x){

    Q->elems[(Q->rear++)] = x;

}

void Dequeue(Queue*Q){

    Q->front++;

}

bool isEmpty(Queue Q){

    return Q.front == Q.rear;

}

void bfs(BST T){

    if(T != NULL){

        Queue Q;
        Q.front = 0;
        Q.rear = 0;

        Enqueue(&Q, T);

        while(!isEmpty(Q)){

            BST curr = Q.elems[Q.front];

            Dequeue(&Q);

            printf("%d ", curr->elem);

            if(curr->LC != NULL){

                Enqueue(&Q, curr->LC);

            }
            if(curr->RC != NULL){

                Enqueue(&Q, curr->RC);

            }

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

    bfs(S);


return 0;
}
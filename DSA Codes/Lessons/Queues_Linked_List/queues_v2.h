<<<<<<< HEAD
//Version 1 of Queue Linked List Implementation. Rear will point to the last node of the list while
//Front will point to the first node of the list

#ifndef queues_v1
#define queues_v1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node{

    int elem;
    struct node *link;

}*List;

typedef struct{

    List front;
    List rear;

}Queue;

void initQueue(Queue* L){

    L->front = NULL;
    L->rear = NULL;

}

void Enqueue(Queue* L, int toAdd){

    List newNode = (List)malloc(sizeof(struct node));

    if(newNode != NULL){

        newNode->elem = toAdd;
        newNode->link = L->rear;

        if(L->front == NULL){

            L->front = newNode;

        }

    L->rear = newNode;
        
    }

}

void Dequeue(Queue *L){

    if(L->front != NULL){

        List *trav;
        for(trav = &L->rear; (*trav)->link != L->front; trav = &(*trav)->link){}

        List toDel = (*trav)->link;
        (*trav)->link = NULL;
        L->front = *trav;

        free(toDel);

    }
    
}

int Front(Queue L){

    return L.front->elem;

}

bool Empty(Queue L){

    return (L.front && L.rear == NULL);

}

void display(Queue L){

    printf("Front: %d\n", L.front->elem);
    printf("Rear: %d\n", L.rear->elem);

    for(; L.rear != NULL; L.rear = L.rear->link){

        printf("%d -> ", L.rear->elem);

    }

    printf("NULL\n");

}

=======
//Version 1 of Queue Linked List Implementation. Rear will point to the last node of the list while
//Front will point to the first node of the list

#ifndef queues_v1
#define queues_v1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node{

    int elem;
    struct node *link;

}*List;

typedef struct{

    List front;
    List rear;

}Queue;

void initQueue(Queue* L){

    L->front = NULL;
    L->rear = NULL;

}

void Enqueue(Queue* L, int toAdd){

    List newNode = (List)malloc(sizeof(struct node));

    if(newNode != NULL){

        newNode->elem = toAdd;
        newNode->link = L->rear;

        if(L->front == NULL){

            L->front = newNode;

        }

    L->rear = newNode;
        
    }

}

void Dequeue(Queue *L){

    if(L->front != NULL){

        List *trav;
        for(trav = &L->rear; (*trav)->link != L->front; trav = &(*trav)->link){}

        List toDel = (*trav)->link;
        (*trav)->link = NULL;
        L->front = *trav;

        free(toDel);

    }
    
}

int Front(Queue L){

    return L.front->elem;

}

bool Empty(Queue L){

    return (L.front && L.rear == NULL);

}

void display(Queue L){

    printf("Front: %d\n", L.front->elem);
    printf("Rear: %d\n", L.rear->elem);

    for(; L.rear != NULL; L.rear = L.rear->link){

        printf("%d -> ", L.rear->elem);

    }

    printf("NULL\n");

}

>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
#endif
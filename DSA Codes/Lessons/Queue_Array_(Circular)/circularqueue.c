<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct{

    char elem[MAX];
    int front;
    int rear;

}CircularList;

void init(CircularList*);
void enqueue(CircularList*, char);
void dequeue(CircularList*);
char front(CircularList);
int empty(CircularList);
int full(CircularList);
void display(CircularList);

int main(){

    CircularList L;

    init(&L);

    enqueue(&L, 'u');
    enqueue(&L, 's');
    enqueue(&L, 'c');
    enqueue(&L, 'u');
    enqueue(&L, 's');
    enqueue(&L, 'c');
    enqueue(&L, 'u');
    enqueue(&L, 's');
    enqueue(&L, 'c');
    enqueue(&L, 's');
    enqueue(&L, 's');



    // dequeue(&L);

    display(L);

return 0;
}

void init(CircularList*list){

    list->front = 1;
    list->rear = 0;

}

void enqueue(CircularList*list, char elem){

    if(full((*list)) == 0){

        list->rear = (list->rear+1)%MAX;   
        list->elem[list->rear] = elem;

    }else{
        printf("List is full\n");
    }

}

void dequeue(CircularList*list){

    if(empty((*list)) == 0){

        list->front = (list->front+1)%MAX;

    }else{
        printf("List is already empty\n");
    }

}

char front(CircularList);

int empty(CircularList list){

    return ((list.rear+1)%MAX == list.front) ? 1 : 0;

}

int full(CircularList list){

    return ((list.rear+2)%MAX == list.front) ? 1 : 0;

}

void display(CircularList list){
    for(int trav = list.front; trav != ((list.rear+1)%MAX); trav = (trav+1)%MAX){
        printf("%c\n", list.elem[trav]);
    }
=======
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct{

    char elem[MAX];
    int front;
    int rear;

}CircularList;

void init(CircularList*);
void enqueue(CircularList*, char);
void dequeue(CircularList*);
char front(CircularList);
int empty(CircularList);
int full(CircularList);
void display(CircularList);

int main(){

    CircularList L;

    init(&L);

    enqueue(&L, 'u');
    enqueue(&L, 's');
    enqueue(&L, 'c');
    enqueue(&L, 'u');
    enqueue(&L, 's');
    enqueue(&L, 'c');
    enqueue(&L, 'u');
    enqueue(&L, 's');
    enqueue(&L, 'c');
    enqueue(&L, 's');
    enqueue(&L, 's');



    // dequeue(&L);

    display(L);

return 0;
}

void init(CircularList*list){

    list->front = 1;
    list->rear = 0;

}

void enqueue(CircularList*list, char elem){

    if(full((*list)) == 0){

        list->rear = (list->rear+1)%MAX;   
        list->elem[list->rear] = elem;

    }else{
        printf("List is full\n");
    }

}

void dequeue(CircularList*list){

    if(empty((*list)) == 0){

        list->front = (list->front+1)%MAX;

    }else{
        printf("List is already empty\n");
    }

}

char front(CircularList);

int empty(CircularList list){

    return ((list.rear+1)%MAX == list.front) ? 1 : 0;

}

int full(CircularList list){

    return ((list.rear+2)%MAX == list.front) ? 1 : 0;

}

void display(CircularList list){
    for(int trav = list.front; trav != ((list.rear+1)%MAX); trav = (trav+1)%MAX){
        printf("%c\n", list.elem[trav]);
    }
>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
}
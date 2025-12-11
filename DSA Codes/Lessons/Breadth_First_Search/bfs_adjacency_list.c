#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 7

typedef struct node{

    int elem;
    struct node *next;

} *Vertex;

typedef struct{

    int list[MAX];
    int front;
    int rear;

} Queue;

typedef int SET[MAX];
typedef Vertex Adj_List[MAX];

//Helper Functions (For Queues)

void initQueue(Queue *Q){

    Q->front = 1;
    Q->rear = 0;

}

bool isEmpty(Queue Q){

    return (Q.rear + 1 ) % MAX == Q.front;

}

void enqueue(Queue *Q, int data){

    if((Q->rear+2)%MAX != Q->front){

        Q->rear = (Q->rear+1)%MAX;
        Q->list[Q->front] = data;

    }

}

int dequeue(Queue *Q){

    int retVal = -1;

    if(!isEmpty(*Q)){

        retVal = Q->list[Q->front];
        Q->front = (Q->front+1)%MAX;

    }

return retVal;
}

//Operations

void initList(Adj_List L){

    for(int i = 0; i < MAX; i++){

        L[i] = NULL;

    }

}

void insertEdge(Adj_List L, int edge[2]){

    Vertex newVertex = (Vertex)malloc(sizeof(struct node));

    if(newVertex != NULL){

        newVertex->elem = edge[1];
        newVertex->next = L[edge[0]];
        L[edge[0]] = newVertex;

    }    

}


void populateList(Adj_List L){

    int elems[][2] = {

        {0, 2}, {0, 1},
        {1, 3}, {1, 2},
        {2, 0},
        {3, 2}, {3, 0},
        {4, 6}, {4, 5},
        {5, 1},
        {6, 5}, {6, 3}

    };

    for(int i = 0; i < 12; i++){

        insertEdge(L, elems[i]);

    }

}


void displayList(Adj_List L){

    for(int i = 0; i < MAX; i++){

        Vertex temp = L[i];

        printf("%d : ", i);

        for(; temp != NULL; temp = temp->next){

            printf("%d -> ", temp->elem);
                
        }

        printf("NULL\n");

    }

}

void bfs(Adj_List L, int root){

    SET visited = {};
    visited[root] = 1;



}

int main(){

    Adj_List L;
    SET Visits = {};

    initList(L);

    populateList(L);

    displayList(L);

    printf("\n");


return 0;
}

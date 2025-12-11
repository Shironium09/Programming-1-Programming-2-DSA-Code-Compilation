#include <stdio.h>
#include <stdlib.h>
#define MAX 7

typedef struct node{

    int elem;
    struct node *next;

} *Vertex;

typedef int SET[MAX];
typedef Vertex Adj_List[MAX];

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

void dfs(Adj_List L, SET visited, int root){

    printf("%d ", root);
    visited[root] = 1;
    
    for(Vertex trav = L[root]; trav != NULL; trav = trav->next){

        if(visited[trav->elem] == 0){

            visited[trav->elem] = 1;
            dfs(L, visited, trav->elem);

        }

    }
    
        
}

int main(){

    Adj_List L;
    SET Visits = {};

    initList(L);

    populateList(L);

    displayList(L);

    int root = 4;

    printf("\n");

    dfs(L, Visits, root);

return 0;
}

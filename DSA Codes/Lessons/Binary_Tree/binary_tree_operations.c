#include <stdio.h>
#include <stdlib.h>

typedef struct cell{

    int elem;
    struct cell *LC;
    struct cell *RC;

}ctype, *BST;


int member(BST T, int elem){

    BST trav;
    for(trav = T; trav != NULL && trav->elem != elem;){

        trav = (elem < trav->elem) ? trav->LC : trav->RC;

    }

return (trav == NULL) ? 0 : 1;
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

// int removeMax(BST *T){

//     BST *trav;
//     int temp;

//     for(trav = T; (*trav)->RC != NULL; trav = &(*trav)->RC){}

//     temp = (*trav)->elem;
    
//     BST toDel = *trav;
//     *trav = (toDel)->RC;
//     free(toDel);

// return temp;
// }

BST removeMostPred(BST *T){
    
    BST *trav, retVal;
    
    for(trav = T; (*trav)->RC != NULL; trav = &(*trav)->RC){}
    
    retVal = *trav;
    *trav = retVal->LC;
    
return retVal;
}

// int removeMin(BST *T){

//     BST *trav;
//     int temp;

//     for(trav = T; (*trav)->LC != NULL; trav = &(*trav)->LC){}

//     temp = (*trav)->elem;

//     BST toDel = *trav;
//     *trav = toDel->RC;
//     free(toDel);

// return temp;
// }

BST removeLeastPred(BST *T){

    BST *trav, retVal;
    
    for(trav = T; (*trav)->LC != NULL; trav = &(*trav)->LC){}
    
    retVal = *trav;
    *trav = retVal->RC;
    
return retVal;
}


void deleteElem(BST *T, int elem){

    BST *trav;

    for(trav = T; *trav != NULL && (*trav)->elem != elem;){

        trav = (elem < (*trav)->elem) ? &(*trav)->LC : &(*trav)->RC;
    
    }

    BST toDel;

    if(*trav != NULL){

        if((*trav)->LC == NULL){

            toDel = *trav;
            *trav = toDel->RC;
            free(toDel);
            
        }
        else if((*trav)->RC == NULL){

            toDel = *trav;
            *trav = toDel->LC;
            free(toDel);

        }else{

            toDel = removeLeastPred(&(*trav)->RC);
            // toDel = removeMostPred(&(*trav)->LC);
            
            (*trav)->elem = toDel->elem;
            free(toDel);

        }

    }

    
}

int min(BST T){

    BST trav;
    for(trav = T; trav->LC != NULL; trav = trav->LC){}

return trav->elem;
}

int max(BST T){

    BST trav;
    for(trav = T; trav->RC != NULL; trav = trav->RC){}

return trav->elem;
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

    postorderTraversal(S);
    printf("\n\n");

    // printf("Maximum is %d\n\n", max(S));
    // printf("Minimum is %d\n\n", min(S));

    // printf("Deleting MAX: %d\n\n", removeMax(&S));
    // printf("Deleting MIN: %d\n\n", removeMin(&S));

    deleteElem(&S, 18);

    postorderTraversal(S);
    printf("\n\n");

return 0;
}
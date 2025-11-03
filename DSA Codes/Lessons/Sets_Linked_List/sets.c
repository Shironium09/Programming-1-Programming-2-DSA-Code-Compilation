<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int elem;
    struct node *link;

}*SET;

void insertLast(SET*, int);
void initSetA(SET *);
void initSetB(SET *);
void display(SET);
SET Union(SET, SET);
SET Intersection(SET, SET);
SET Difference(SET, SET);

int main(){

    SET A = NULL;
    SET B = NULL;

    initSetA(&A);
    initSetB(&B);

    printf("Original Sets:\n\n");
    printf("SET A: ");
    display(A);
    printf("\nSET B: ");
    display(B);

    printf("\nUnion of Sets:\n\n");
    SET C = Union(A, B);
    printf("Union: ");
    display(C);

    printf("\nIntersection of Sets:\n\n");
    SET D = Intersection(A, B);
    printf("Intersection: ");
    display(D);

    printf("\nSet Difference:\n\n");
    SET E = Difference(A, B);
    SET F = Difference(B, A);
    printf("A - B: ");
    display(E);
    printf("\nB - A: ");
    display(F);

return 0;
}

void insertLast(SET* set, int toInsert){

    SET newNode = (SET)malloc(sizeof(struct node));
    SET *trav;
    for(trav = set; *trav != NULL; trav = &(*trav)->link){}
    
    newNode->elem = toInsert;
    newNode->link = NULL;
    *trav = newNode;

}

void initSetA(SET *set){

    int arr[] = {1, 2, 3, 5, 7, 9, 11, 13, 15, -1};
    for(int i = 0; arr[i] != -1; i++){

        insertLast(set, arr[i]);

    }

}

void initSetB(SET *set){

    int arr[] = {3, 4, 5, 6, 9, 10, 12, 14, 15, -1};
    for(int i = 0; arr[i] != -1; i++){

        insertLast(set, arr[i]);

    }

}

void display(SET set){

    for(; set != NULL; set = set->link){

        printf("%d -> ", set->elem);

    }

    printf("NULL\n");
}

SET Union(SET A, SET B){

    SET C; 
    SET* cptr, aptr, bptr;
    C = NULL;
    cptr = &C;
    aptr = A, bptr = B;
    
    while(aptr != NULL && bptr != NULL){

        SET newNode = (SET)malloc(sizeof(struct node));

        if(aptr->elem < bptr->elem){

            newNode->elem = aptr->elem;
            aptr = aptr->link;

        }else{

            if(aptr->elem == bptr->elem){

                newNode->elem = aptr->elem;
                aptr = aptr->link;

            }else{

                newNode->elem = bptr->elem;

            }

            bptr = bptr->link;

        }

    *cptr = newNode;
    cptr = &(*cptr)->link;

    }

    if(aptr != NULL){

        bptr = aptr;

    }

    while(bptr != NULL){

        SET newNode = (SET)malloc(sizeof(struct node));
        newNode->elem = bptr->elem;

        bptr = bptr->link;
        *cptr = newNode;
        cptr = &(*cptr)->link;

    }

    *cptr = NULL;
        
return C;
}

SET Intersection(SET A, SET B){

    SET C = NULL; SET *cptr, aptr, bptr;
    C = NULL;
    cptr = &C;

    // for(aptr = A; aptr != NULL; aptr = aptr->link){

    //     bptr = B;
    //     for(; bptr != NULL && aptr->elem != bptr->elem; bptr = bptr->link){}

    //     if(bptr != NULL){

    //         SET newNode = malloc(sizeof(struct node));
    //         newNode->elem = aptr->elem;

    //         *cptr = newNode;
    //         cptr = &(*cptr)->link;

    //     }

    // }

    for(aptr = A, bptr = B; aptr != NULL && bptr != NULL;){

        if(aptr->elem > bptr->elem){

            bptr = bptr->link;

        }else{

            if(aptr->elem == bptr->elem){

                SET newNode = (SET)malloc(sizeof(struct node));
                newNode->elem = aptr->elem;
                newNode->link = NULL;
                *cptr = newNode;
                cptr = &(*cptr)->link;
                bptr = bptr->link;                  

            }
        
        aptr = aptr->link;

        }

    }

    *cptr = NULL;

return C;
}

SET Difference(SET first, SET second){

    SET C; SET *cptr, firstptr, secondptr;
    C = NULL;
    cptr = &C;

    for(firstptr = first; firstptr != NULL; firstptr = firstptr->link){

        secondptr = second;
        for(; secondptr != NULL && firstptr->elem != secondptr->elem; secondptr = secondptr = secondptr->link){}

        if(secondptr == NULL){

            SET newNode = (SET)malloc(sizeof(struct node));
            newNode->elem = firstptr->elem;

            *cptr = newNode;
            cptr = &(*cptr)->link;

        }

    }

    *cptr = NULL;

return C;
}
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int elem;
    struct node *link;

}*SET;

void insertLast(SET*, int);
void initSetA(SET *);
void initSetB(SET *);
void display(SET);
SET Union(SET, SET);
SET Intersection(SET, SET);
SET Difference(SET, SET);

int main(){

    SET A = NULL;
    SET B = NULL;

    initSetA(&A);
    initSetB(&B);

    printf("Original Sets:\n\n");
    printf("SET A: ");
    display(A);
    printf("\nSET B: ");
    display(B);

    printf("\nUnion of Sets:\n\n");
    SET C = Union(A, B);
    printf("Union: ");
    display(C);

    printf("\nIntersection of Sets:\n\n");
    SET D = Intersection(A, B);
    printf("Intersection: ");
    display(D);

    printf("\nSet Difference:\n\n");
    SET E = Difference(A, B);
    SET F = Difference(B, A);
    printf("A - B: ");
    display(E);
    printf("\nB - A: ");
    display(F);

return 0;
}

void insertLast(SET* set, int toInsert){

    SET newNode = (SET)malloc(sizeof(struct node));
    SET *trav;
    for(trav = set; *trav != NULL; trav = &(*trav)->link){}
    
    newNode->elem = toInsert;
    newNode->link = NULL;
    *trav = newNode;

}

void initSetA(SET *set){

    int arr[] = {1, 2, 3, 5, 7, 9, 11, 13, 15, -1};
    for(int i = 0; arr[i] != -1; i++){

        insertLast(set, arr[i]);

    }

}

void initSetB(SET *set){

    int arr[] = {3, 4, 5, 6, 9, 10, 12, 14, 15, -1};
    for(int i = 0; arr[i] != -1; i++){

        insertLast(set, arr[i]);

    }

}

void display(SET set){

    for(; set != NULL; set = set->link){

        printf("%d -> ", set->elem);

    }

    printf("NULL\n");
}

SET Union(SET A, SET B){

    SET C; 
    SET* cptr, aptr, bptr;
    C = NULL;
    cptr = &C;
    aptr = A, bptr = B;
    
    while(aptr != NULL && bptr != NULL){

        SET newNode = (SET)malloc(sizeof(struct node));

        if(aptr->elem < bptr->elem){

            newNode->elem = aptr->elem;
            aptr = aptr->link;

        }else{

            if(aptr->elem == bptr->elem){

                newNode->elem = aptr->elem;
                aptr = aptr->link;

            }else{

                newNode->elem = bptr->elem;

            }

            bptr = bptr->link;

        }

    *cptr = newNode;
    cptr = &(*cptr)->link;

    }

    if(aptr != NULL){

        bptr = aptr;

    }

    while(bptr != NULL){

        SET newNode = (SET)malloc(sizeof(struct node));
        newNode->elem = bptr->elem;

        bptr = bptr->link;
        *cptr = newNode;
        cptr = &(*cptr)->link;

    }

    *cptr = NULL;
        
return C;
}

SET Intersection(SET A, SET B){

    SET C = NULL; SET *cptr, aptr, bptr;
    C = NULL;
    cptr = &C;

    // for(aptr = A; aptr != NULL; aptr = aptr->link){

    //     bptr = B;
    //     for(; bptr != NULL && aptr->elem != bptr->elem; bptr = bptr->link){}

    //     if(bptr != NULL){

    //         SET newNode = malloc(sizeof(struct node));
    //         newNode->elem = aptr->elem;

    //         *cptr = newNode;
    //         cptr = &(*cptr)->link;

    //     }

    // }

    for(aptr = A, bptr = B; aptr != NULL && bptr != NULL;){

        if(aptr->elem > bptr->elem){

            bptr = bptr->link;

        }else{

            if(aptr->elem == bptr->elem){

                SET newNode = (SET)malloc(sizeof(struct node));
                newNode->elem = aptr->elem;
                newNode->link = NULL;
                *cptr = newNode;
                cptr = &(*cptr)->link;
                bptr = bptr->link;                  

            }
        
        aptr = aptr->link;

        }

    }

    *cptr = NULL;

return C;
}

SET Difference(SET first, SET second){

    SET C; SET *cptr, firstptr, secondptr;
    C = NULL;
    cptr = &C;

    for(firstptr = first; firstptr != NULL; firstptr = firstptr->link){

        secondptr = second;
        for(; secondptr != NULL && firstptr->elem != secondptr->elem; secondptr = secondptr = secondptr->link){}

        if(secondptr == NULL){

            SET newNode = (SET)malloc(sizeof(struct node));
            newNode->elem = firstptr->elem;

            *cptr = newNode;
            cptr = &(*cptr)->link;

        }

    }

    *cptr = NULL;

return C;
}
>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd

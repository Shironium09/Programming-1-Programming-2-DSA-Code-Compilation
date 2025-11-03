<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

typedef int SET[MAX];

void insert(SET*, int);
void delete(SET*, int);
bool isMember(SET, int);
void Union(SET, SET, SET*);
void Intersection(SET, SET, SET*);
void Difference(SET, SET, SET*);
bool isSubset(SET, SET);
void display(SET);

int main(){

    SET A = {1, 0, 1, 1, 0};
    SET B = {1, 1, 0, 1, 0};

    SET C;
    SET D;

    Union(A, B, &C);
    Intersection(A, B, &D);

    printf((isSubset(A, B)) ? "A is a Subset of B\n\n" : "A is NOT a Subset of B\n\n");

    display(A);
    display(B);
    display(C);
    display(D);


return 0;
}

void insert(SET* A, int index){

    (*A)[index] = 1;

}

void delete(SET* A, int index){

    (*A)[index] = 0;

}

bool isMember(SET A, int index){

    return A[index] == 1;

}

void Union(SET A, SET B, SET*C){

    for(int i = 0; i < MAX; i++){

        (*C)[i] = A[i] | B[i];

    }

}

void Intersection(SET A, SET B, SET*C){

    for(int i = 0; i < MAX; i++){

        (*C)[i] = A[i] & B[i];

    }    

}

void Difference(SET A, SET B, SET*C){

    for(int i = 0; i < MAX; i++){



    }

}

void display(SET A){

    printf(" 0   1   2   3   4 \n");

    for(int i = 0; i < MAX; i++){

        printf("[%d] ", A[i]);

    }

printf("\n\n");
=======
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

typedef int SET[MAX];

void insert(SET*, int);
void delete(SET*, int);
bool isMember(SET, int);
void Union(SET, SET, SET*);
void Intersection(SET, SET, SET*);
void Difference(SET, SET, SET*);
bool isSubset(SET, SET);
void display(SET);

int main(){

    SET A = {1, 0, 1, 1, 0};
    SET B = {1, 1, 0, 1, 0};

    SET C;
    SET D;

    Union(A, B, &C);
    Intersection(A, B, &D);

    printf((isSubset(A, B)) ? "A is a Subset of B\n\n" : "A is NOT a Subset of B\n\n");

    display(A);
    display(B);
    display(C);
    display(D);


return 0;
}

void insert(SET* A, int index){

    (*A)[index] = 1;

}

void delete(SET* A, int index){

    (*A)[index] = 0;

}

bool isMember(SET A, int index){

    return A[index] == 1;

}

void Union(SET A, SET B, SET*C){

    for(int i = 0; i < MAX; i++){

        (*C)[i] = A[i] | B[i];

    }

}

void Intersection(SET A, SET B, SET*C){

    for(int i = 0; i < MAX; i++){

        (*C)[i] = A[i] & B[i];

    }    

}

void Difference(SET A, SET B, SET*C){

    for(int i = 0; i < MAX; i++){



    }

}

void display(SET A){

    printf(" 0   1   2   3   4 \n");

    for(int i = 0; i < MAX; i++){

        printf("[%d] ", A[i]);

    }

printf("\n\n");
>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
}
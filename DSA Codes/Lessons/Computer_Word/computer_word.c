<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned char SET;

void initSet(SET*A){
   
    *A = 0;
   
}

void insert(SET*A, int index){
   
    *A = *A | 1 << index;
   
}

void displaySet(SET A){
   
    SET mask = 1;
    int size = sizeof(char)*8-1;
   
    for(int i = 0; i <= size ; mask = mask << 1, i++){
       
        if((A & mask) == mask){
            printf("%d ", i);
        }
       
    }
   
printf("\n\n");
}

void displayBit(SET A){
   
    SET mask = 1 << (sizeof(SET)*8-1);
   
    for(; mask > 0 ; mask = mask >> 1){
       
        printf("%d ", ((A & mask) == mask) ? 1 : 0);
       
    }
   
printf("\n");
}

void delete(SET*A, int index){
   
    int mask = 1 << index;
    mask = ~mask;
    *A = *A & mask;
   
}

SET Union(SET A, SET B){
   
    return A | B;
   
}

SET Intersection(SET A, SET B){
   
    return A & B;
   
}

SET Difference(SET A, SET B){
   
    return A & ~B;

}

bool member(SET A, int index){
   
    SET mask = 1 << index;
   
    return (A & mask) == mask;
   
}

int main(){
   
    SET A;
    SET B;
    initSet(&A);
    initSet(&B);

    insert(&A, 0);
    insert(&A, 5);
    insert(&A, 7);
    insert(&B, 2);
    insert(&B, 4);
    insert(&B, 7);
    delete(&A, 5);
   
    printf("Set A: ");
    displayBit(A);
    displaySet(A);
    printf("Set B: ");
    displayBit(B);
    displaySet(B);
   
    SET U = Union(A, B);
    SET I = Intersection(A, B);
    SET Diff_1 = Difference(A, B);
    SET Diff_2 = Difference(B, A);
   
    printf("A u B: ");
    displayBit(U);
    displaySet(U);
   
    printf("A n B: ");
    displayBit(I);
    displaySet(I);
   
    printf("A - B: ");
    displayBit(Diff_1);
    displaySet(Diff_1);
   
    printf("B - A: ");
    displayBit(Diff_2);
    displaySet(Diff_2);
   
    int x = 4;
    printf((member(A, x)) ? "%d is a member of A" : "%d is NOT a member of A", x);

return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned char SET;

void initSet(SET*A){
   
    *A = 0;
   
}

void insert(SET*A, int index){
   
    *A = *A | 1 << index;
   
}

void displaySet(SET A){
   
    SET mask = 1;
    int size = sizeof(char)*8-1;
   
    for(int i = 0; i <= size ; mask = mask << 1, i++){
       
        if((A & mask) == mask){
            printf("%d ", i);
        }
       
    }
   
printf("\n\n");
}

void displayBit(SET A){
   
    SET mask = 1 << (sizeof(SET)*8-1);
   
    for(; mask > 0 ; mask = mask >> 1){
       
        printf("%d ", ((A & mask) == mask) ? 1 : 0);
       
    }
   
printf("\n");
}

void delete(SET*A, int index){
   
    int mask = 1 << index;
    mask = ~mask;
    *A = *A & mask;
   
}

SET Union(SET A, SET B){
   
    return A | B;
   
}

SET Intersection(SET A, SET B){
   
    return A & B;
   
}

SET Difference(SET A, SET B){
   
    return A & ~B;

}

bool member(SET A, int index){
   
    SET mask = 1 << index;
   
    return (A & mask) == mask;
   
}

int main(){
   
    SET A;
    SET B;
    initSet(&A);
    initSet(&B);

    insert(&A, 0);
    insert(&A, 5);
    insert(&A, 7);
    insert(&B, 2);
    insert(&B, 4);
    insert(&B, 7);
    delete(&A, 5);
   
    printf("Set A: ");
    displayBit(A);
    displaySet(A);
    printf("Set B: ");
    displayBit(B);
    displaySet(B);
   
    SET U = Union(A, B);
    SET I = Intersection(A, B);
    SET Diff_1 = Difference(A, B);
    SET Diff_2 = Difference(B, A);
   
    printf("A u B: ");
    displayBit(U);
    displaySet(U);
   
    printf("A n B: ");
    displayBit(I);
    displaySet(I);
   
    printf("A - B: ");
    displayBit(Diff_1);
    displaySet(Diff_1);
   
    printf("B - A: ");
    displayBit(Diff_2);
    displaySet(Diff_2);
   
    int x = 4;
    printf((member(A, x)) ? "%d is a member of A" : "%d is NOT a member of A", x);

return 0;
>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stacks_v1.h"

int main(){

    Stack L;    
    initStack(&L);
    Push(&L, 1);
    Push(&L, 2);
    Push(&L, 3);
    Push(&L, 4);
    Push(&L, 5);
    Pop(&L);

    display(L);

    printf((Empty(L)) ? "Stack is empty!" : "Stack is not empty!");

}
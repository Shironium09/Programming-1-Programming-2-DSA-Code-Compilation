<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
// #include "arrayStack.h"
#include "StacksLinked.h"


int main(){

Stack L;

init(&L);

push(&L, 'u');
push(&L, 's');
push(&L, 'c');

printStack(&L);

Stack temp;

init(&temp);

push(&temp, top(&L));
pop(&L);
push(&temp, top(&L));
pop(&L);
push(&temp, top(&L));
pop(&L);

push(&L, 'w');

push(&L, top(&temp));
pop(&temp);
push(&L, top(&temp));
pop(&temp);
push(&L, top(&temp));
pop(&temp);

printStack(&L);

=======
#include <stdio.h>
#include <stdlib.h>
// #include "arrayStack.h"
#include "StacksLinked.h"


int main(){

Stack L;

init(&L);

push(&L, 'u');
push(&L, 's');
push(&L, 'c');

printStack(&L);

Stack temp;

init(&temp);

push(&temp, top(&L));
pop(&L);
push(&temp, top(&L));
pop(&L);
push(&temp, top(&L));
pop(&L);

push(&L, 'w');

push(&L, top(&temp));
pop(&temp);
push(&L, top(&temp));
pop(&temp);
push(&L, top(&temp));
pop(&temp);

printStack(&L);

>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
}
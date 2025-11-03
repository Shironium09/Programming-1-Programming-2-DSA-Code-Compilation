<<<<<<< HEAD
#include "queues_v1.h"

int main(){

    Queue L;
    initQueue(&L);

    Enqueue(&L, 1);
    Enqueue(&L, 2);
    Enqueue(&L, 3);
    Enqueue(&L, 4);
    Enqueue(&L, 5);
    Enqueue(&L, 6);
    Enqueue(&L, 4);
    Dequeue(&L);
    Enqueue(&L, 19);
    Dequeue(&L);

    display(L);

=======
#include "queues_v1.h"

int main(){

    Queue L;
    initQueue(&L);

    Enqueue(&L, 1);
    Enqueue(&L, 2);
    Enqueue(&L, 3);
    Enqueue(&L, 4);
    Enqueue(&L, 5);
    Enqueue(&L, 6);
    Enqueue(&L, 4);
    Dequeue(&L);
    Enqueue(&L, 19);
    Dequeue(&L);

    display(L);

>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
}
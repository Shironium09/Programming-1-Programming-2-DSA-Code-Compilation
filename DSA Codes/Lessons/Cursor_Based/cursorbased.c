<<<<<<< HEAD
//This code is a the cursor-based implementation in C. Storing the linked list in an array

#include <stdio.h>
#define MAX 5

typedef struct cell{

    char elem;
    int link;

}ntype;

typedef struct{

    ntype Nodes[MAX];
    int avail;

}VirtualHeap;

void initList(VirtualHeap*);
int allocSpace(VirtualHeap*);
void deallocSpace(VirtualHeap*, int);
void display(VirtualHeap);
void displayNodes(VirtualHeap, int);
void insertLast(VirtualHeap*, char, int*);
void insertFirst(VirtualHeap*, char, int*);
void insertSorted(VirtualHeap*, char, int*);
void delete(VirtualHeap*, char, int*);

int main(){

int L;
VirtualHeap VH;
initList(&VH);
L = -1;

// insertLast(&VH, 'z');
// insertLast(&VH, 'c');
// insertLast(&VH, 'w');
// insertLast(&VH, 'l');
// insertLast(&VH, 'a');
// insertLast(&VH, 'n');
// insertFirst(&VH, 'u', &L);
// insertFirst(&VH, 's', &L);
// insertFirst(&VH, 'c', &L);
insertLast(&VH, 'a', &L);
insertLast(&VH, 'c', &L);
insertLast(&VH, 'd', &L);
insertLast(&VH, 'e', &L);
insertSorted(&VH, 'b', &L);
delete(&VH, 'c', &L);

display(VH);
displayNodes(VH, L);

return 0; 
}

void initList(VirtualHeap*VH){

    for(int i = 0; i < MAX; i++){

        VH->Nodes[i].link = i-1;

    }

    VH->avail = MAX-1;

}

int allocSpace(VirtualHeap* VH){

    int temp = VH->avail;
    if(temp != -1){
        VH->avail = VH->Nodes[temp].link;
    }

return temp;
}

void deallocSpace(VirtualHeap*VH, int index){

    if(index < MAX && index != -1){
        VH->Nodes[index].link = VH->avail;
        VH->avail = index;
    }

}

void display(VirtualHeap VH){

    printf("Current Available: %d\n", VH.avail);

    printf("The current Nodes:\n");

    printf("Index\t|\tElement\tLink\n");

    for(int i = 0; i < MAX; i++){
        printf("%d\t|\t%c\t%d\n", i, VH.Nodes[i].elem, VH.Nodes[i].link);
    }

printf("\n");
}

void displayNodes(VirtualHeap VH, int curr){

    for(; curr != -1; curr = VH.Nodes[curr].link){
        printf("%c -> ", VH.Nodes[curr].elem);
    }

printf("NULL\n");
}


void insertLast(VirtualHeap * VH, char elem, int* curr){

    int temp = allocSpace(VH);

    if(temp != -1){

        int *trav;
        for(trav = curr; *trav != -1; trav = &VH->Nodes[*trav].link){}
        VH->Nodes[temp].elem = elem;
        VH->Nodes[temp].link = -1;
        *trav = temp;

    }


}

void insertFirst(VirtualHeap*VH, char elem, int* curr){

    int temp = allocSpace(VH);
    if(temp != -1){
        VH->Nodes[temp].elem = elem;
        VH->Nodes[temp].link = *curr;
        *curr = temp;
    }

}

void insertSorted(VirtualHeap*VH, char elem, int* curr){

    int temp = allocSpace(VH);
    if(temp != -1){
        
        int *trav;
        for(trav = curr; *trav != -1 && VH->Nodes[*trav].elem < elem; trav = &VH->Nodes[*trav].link){}
        VH->Nodes[temp].elem = elem;
        VH->Nodes[temp].link = *trav;
        *trav = temp;

    }

}

void delete(VirtualHeap*VH, char elem, int *curr){

    int *trav;
    for(trav = curr; *trav != -1 && VH->Nodes[*trav].elem != elem; trav = &VH->Nodes[*trav].link){}
    if(*trav != -1){

        int temp = *trav;
        *trav = VH->Nodes[temp].link;
        deallocSpace(VH, temp);

    }

=======
//This code is a the cursor-based implementation in C. Storing the linked list in an array

#include <stdio.h>
#define MAX 5

typedef struct cell{

    char elem;
    int link;

}ntype;

typedef struct{

    ntype Nodes[MAX];
    int avail;

}VirtualHeap;

void initList(VirtualHeap*);
int allocSpace(VirtualHeap*);
void deallocSpace(VirtualHeap*, int);
void display(VirtualHeap);
void displayNodes(VirtualHeap, int);
void insertLast(VirtualHeap*, char, int*);
void insertFirst(VirtualHeap*, char, int*);
void insertSorted(VirtualHeap*, char, int*);
void delete(VirtualHeap*, char, int*);

int main(){

int L;
VirtualHeap VH;
initList(&VH);
L = -1;

// insertLast(&VH, 'z');
// insertLast(&VH, 'c');
// insertLast(&VH, 'w');
// insertLast(&VH, 'l');
// insertLast(&VH, 'a');
// insertLast(&VH, 'n');
// insertFirst(&VH, 'u', &L);
// insertFirst(&VH, 's', &L);
// insertFirst(&VH, 'c', &L);
insertLast(&VH, 'a', &L);
insertLast(&VH, 'c', &L);
insertLast(&VH, 'd', &L);
insertLast(&VH, 'e', &L);
insertSorted(&VH, 'b', &L);
delete(&VH, 'c', &L);

display(VH);
displayNodes(VH, L);

return 0; 
}

void initList(VirtualHeap*VH){

    for(int i = 0; i < MAX; i++){

        VH->Nodes[i].link = i-1;

    }

    VH->avail = MAX-1;

}

int allocSpace(VirtualHeap* VH){

    int temp = VH->avail;
    if(temp != -1){
        VH->avail = VH->Nodes[temp].link;
    }

return temp;
}

void deallocSpace(VirtualHeap*VH, int index){

    if(index < MAX && index != -1){
        VH->Nodes[index].link = VH->avail;
        VH->avail = index;
    }

}

void display(VirtualHeap VH){

    printf("Current Available: %d\n", VH.avail);

    printf("The current Nodes:\n");

    printf("Index\t|\tElement\tLink\n");

    for(int i = 0; i < MAX; i++){
        printf("%d\t|\t%c\t%d\n", i, VH.Nodes[i].elem, VH.Nodes[i].link);
    }

printf("\n");
}

void displayNodes(VirtualHeap VH, int curr){

    for(; curr != -1; curr = VH.Nodes[curr].link){
        printf("%c -> ", VH.Nodes[curr].elem);
    }

printf("NULL\n");
}


void insertLast(VirtualHeap * VH, char elem, int* curr){

    int temp = allocSpace(VH);

    if(temp != -1){

        int *trav;
        for(trav = curr; *trav != -1; trav = &VH->Nodes[*trav].link){}
        VH->Nodes[temp].elem = elem;
        VH->Nodes[temp].link = -1;
        *trav = temp;

    }


}

void insertFirst(VirtualHeap*VH, char elem, int* curr){

    int temp = allocSpace(VH);
    if(temp != -1){
        VH->Nodes[temp].elem = elem;
        VH->Nodes[temp].link = *curr;
        *curr = temp;
    }

}

void insertSorted(VirtualHeap*VH, char elem, int* curr){

    int temp = allocSpace(VH);
    if(temp != -1){
        
        int *trav;
        for(trav = curr; *trav != -1 && VH->Nodes[*trav].elem < elem; trav = &VH->Nodes[*trav].link){}
        VH->Nodes[temp].elem = elem;
        VH->Nodes[temp].link = *trav;
        *trav = temp;

    }

}

void delete(VirtualHeap*VH, char elem, int *curr){

    int *trav;
    for(trav = curr; *trav != -1 && VH->Nodes[*trav].elem != elem; trav = &VH->Nodes[*trav].link){}
    if(*trav != -1){

        int temp = *trav;
        *trav = VH->Nodes[temp].link;
        deallocSpace(VH, temp);

    }

>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
}
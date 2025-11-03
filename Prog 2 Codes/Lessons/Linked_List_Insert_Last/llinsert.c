#include <stdio.h>
#include <stdlib.h>

typedef struct Node{

int value;
struct Node *next;

}Node;

void display(Node *head);
void createNode(Node **headRef, int value);

int main(){

    Node *head = NULL;    

    createNode(&head, 10);
    createNode(&head, 23);
    createNode(&head, 2);
    createNode(&head, 13);
    createNode(&head, 42);
    createNode(&head, 4);
    createNode(&head, 54);
    createNode(&head, 90);
    createNode(&head, 54);
    createNode(&head, 34);

    display(head);

    free(head);

return 0;
}

void createNode(Node **headRef, int value){

    Node *temp = malloc(sizeof(Node));

    temp->value = value;
    temp->next = NULL;

    if(*headRef == NULL){
        
        *headRef = temp;

    }
    else{

        Node *tail = *headRef;

        while(tail->next != NULL){

            tail = tail->next;

        }

        tail->next = temp;

    }

}

void display(Node *head){

    Node *temp = head;

    while(temp != NULL){

        printf("%d ", temp->value);

        temp = temp->next;

    }

}
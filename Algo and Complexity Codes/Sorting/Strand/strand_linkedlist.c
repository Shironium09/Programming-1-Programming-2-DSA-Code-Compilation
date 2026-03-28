#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int val;
    struct node *next;

}*Node;

void print_arr(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }

printf("\n");
}

Node merge(Node a, Node b){

    if(a == NULL){ return b; }
    if(b == NULL){ return a; }

    Node result = NULL;

    if(a->val <= b->val){

        result = a;
        result->next = merge(a->next, b);

    }else{

        result = b;
        result->next = merge(a, b->next);

    }

return result;
}

void strand_sort(Node* head_ref){
    
    if(*head_ref == NULL || (*head_ref)->next == NULL){

        return;

    }

    Node result = NULL;

    while(*head_ref != NULL){

        Node strand = *head_ref;
        *head_ref = (*head_ref)->next;
        strand->next = NULL;

        Node strandTail = strand;
        Node curr = *head_ref;
        Node prev = NULL;

        while(curr != NULL){

            if(curr->val >= strandTail->val){

                if(prev != NULL){

                    prev->next = curr->next;

                }else{

                    *head_ref = curr->next;

                }
                
                strandTail->next = curr;
                strandTail = curr;

                curr = curr->next;
                strandTail->next = NULL;
                
            }else{

                prev = curr;
                curr = curr->next;

            }

        }

        result = merge(result, strand);

    }

    *head_ref = result;

}

void insertLast(Node *node, int val){

    Node newNode = malloc(sizeof(Node));
    Node *trav = node;

    newNode->val = val;
    newNode->next = NULL;

    for(; *trav != NULL; trav = &(*trav)->next){}

    *trav = newNode;

}

void initNode(Node *nodes, int *arr, int size){

    for(int i = 0; i < size; i++){

        insertLast(nodes, arr[i]);

    }

}

void print_linked_list(Node node){

    for(Node temp = node; temp != NULL; temp = temp->next){

        printf("%d ", temp->val);

    }

printf("\n");
}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    Node list = NULL;
    initNode(&list, arr, 9);

    printf("Original Array:\t");
    // print_arr(arr, 9);

    print_linked_list(list);

    //merge_sort(arr, first index, last index);
    // merge_sort(arr, 0, 8);

    strand_sort(&list);

    printf("Sorted Array:\t");
    // print_arr(arr, 9);    

    print_linked_list(list);

return 0;
}
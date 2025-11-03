#include <stdio.h>
#include <stdlib.h>

#define MAX 5;

void display(int *arr, int *n,int *count);
void insertFirst(int *arr, int *n,int *count);
void insertLast(int *arr, int *n,int *count);
void insertIndex(int *arr, int *n,int *count);
int* expandArray(int *arr, int *n,int *count);

int main(){
    
int n = 5, m, Exit = 0, expansion = 1, count = 0, limit = 5;

int *arr;
arr = malloc(sizeof(int)*n);

while(Exit == 0){
    printf("What do you want to do?\n[1]Insert First\n[2]Insert Into\n[3]Insert Last\n[4]Display\n[5]Exit\n");
    printf("Action: ");
    scanf("%d", &m);
    
    switch(m){
        case 1:
        insertFirst(arr, &n, &count);
        count++;
        Exit = 0;
        break;
        
        case 2:
        insertIndex(arr, &n, &count);
        Exit = 0;
        count++;
        break;
        
        case 3:
        insertLast(arr, &n, &count);
        Exit = 0;
        count++;
        break;
        
        case 4:
        display(arr, &n, &count);
        Exit = 0;
        break;
        
        case 5:
        Exit = 1;
        break;

        default:
        Exit = 1;
    }
    
    if(count == limit*expansion){
        n*=2;
        arr = expandArray(arr, &n, &count);
        expansion++;
    }

}
    
return 0;
}

void display(int *arr, int *n,int *count){
    
    printf("\n");
    
    printf("Displaying array: ");
    
    for(int i = 0; i < *count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void insertFirst(int *arr, int *n,int *count){
    
    int element;
    
    printf("\n");
    
// printf("%d ", *count);
    
    printf("Enter the number to insert at the first element: ");
    scanf("%d", &element);
    
    for(int i = *count; i > 0; i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = element;
    
    printf("\n");

}

void insertLast(int *arr, int *n,int *count){
    
    int element;
    
    printf("\n");
    
// printf("%d ", *count);

    printf("Enter the number to insert at the last element: ");
    scanf("%d", &element);
    
    arr[*count] = element;

    
    printf("\n");

}

void insertIndex(int *arr, int *n,int *count){

    int element, index;
    
    printf("\n");

// printf("%d ", *count);

    printf("Enter the number to insert at the index element: ");
    scanf("%d", &element);
    
    printf("Enter the index which you want to insert the element: ");
    scanf("%d", &index);
    
    for(int i = *count; i > index; i--){
        arr[i] = arr[i-1];
    }
    
    arr[index] = element;
    
    printf("\n");


}

int* expandArray(int *arr, int *n,int *count){

    arr = realloc(arr, sizeof(int)*(*n));

    printf("Memory has been doubled.");
    printf("\n\n");
    

return arr;
}
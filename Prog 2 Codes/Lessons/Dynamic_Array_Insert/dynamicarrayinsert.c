#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int *insert(int *arr, int n, int index, int value);

int main(){
    
int n, index, value;
printf("Enter the size of the array: ");
scanf("%d", &n);

int arr[MAX];
printf("Enter the elements of the array: ");
for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

printf("Enter the index where you want to insert the element: ");
scanf("%d", &index);

printf("Enter the value you want to insert: ");
scanf("%d", &value);

if(n < index){
    printf("Invalid index.");
}
else if(n >= index){
    int *nArr = insert(arr, n, index, value);
    
    printf("The modified array is: ");
    for(int i = 0; i <= n; i++){
        printf("%d ", nArr[i]);
    }
}


    
return 0;
}

int *insert(int *arr, int n, int index, int value){
    
int *nArr;
nArr = malloc(sizeof(int)*MAX);

for(int i = n; i > index; i--){
    arr[i] = arr[i-1];
}

arr[index] = value;

for(int i = 0; i < n; i++){
    nArr[i] = arr[i];
}
    
return arr;
}
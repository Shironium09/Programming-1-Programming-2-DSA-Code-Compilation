#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
#define INT_MIN -2147483648
#define INT_MAX 214748364

void display(int arr[]);
int *sorting_souls(int arr[]);

int main() {
    int list[MAX_SIZE];

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; ++i) {
        scanf("%d", &list[i]);
    }


    printf("Initial soul list: ");
    // Hey there, start typing your C code here...
    display(list);

    printf("Sorted soul list: ");
    // Hey there, start typing your C code here...
    int*arr = malloc(sizeof(int)*MAX_SIZE);
    arr = sorting_souls(list);
    display(arr);


    return 0;
}

void display(int arr[]) {
    printf("[");
    for(int i = 1; i <= arr[0]; ++i) {
        printf("%d", arr[i]);
        if(i < arr[0]) {
            printf("|");
        }
    }
    printf("], SOUL COUNT: %d\n", arr[0]);
}

int *sorting_souls(int arr[]) {
    // Hey there, start typing your C code here...


//Finding the second highest element
int max1, max2;

if(arr[1] > arr[2]){
    max1 = arr[1];
    max2 = arr[2];
}
else{
    max1 = arr[2];
    max2 = arr[1];
}


for(int i = 1; i <= arr[0]; i++){
    if(arr[i] > max1){
        max2 = max1;
        max1 = arr[i];
    }
    else if(arr[i] > max2 && arr[i] < max1){
        max2 = arr[i];
    }
}

printf("\n\n%d\n%d\n\n", max1, max2);

//Check if the 2nd maximum element is correct


int count = 0;
    //Loop thorugh and find where the 2nd
    //highest is first seen
for(int i = 1; i <= arr[0]; i++){
    if(arr[i] == max2){
        break;
    }
    else{
        count++;
    }
}


//Check is the index count is correct

arr[0]-=count;

int *soul = malloc(sizeof(int)*arr[0]+1);
soul[0] = arr[0];

    //since count, set the new array to only
    //have those elements

for(int i = count+1, j = 1; j <= soul[0]; i++, j++){
    soul[j] = arr[i];
}


return soul;
}
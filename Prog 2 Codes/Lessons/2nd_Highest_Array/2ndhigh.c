#include <stdio.h>

int main(){
    
int arr[10] = {1, 2, 5, 66, 12, 76, 324, 74, 100, 99};
int size = 10;

int highest = arr[0];
int second = arr[0];

for(int i = 0; i < size; i++){
    if(arr[i] > highest){
        highest = arr[i];
    }
}

for(int i = 0; i < size; i++){
    if(arr[i] > second && arr[i] < highest){
        second = arr[i];
    }
}

printf("%d %d", highest, second);
    
return 0;
}
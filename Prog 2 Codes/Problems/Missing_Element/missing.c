#include <stdio.h>

int missing();

int main(){

int a = missing();

printf("The missing number is: %d", a);

return 0;
}

int missing(){

int n;
printf("Enter the size of array: ");
scanf("%d", &n);

int arr[n];

for(int i = 0; i < n; i++){

printf("Enter element: ");
scanf("%d", &arr[i]);

}

for(int i = 0, j = 1; i < n; i++, j++){

if(arr[i] != j){
    return j;
    break;
}

}

}
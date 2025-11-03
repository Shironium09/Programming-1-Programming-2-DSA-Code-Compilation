#include <stdio.h>

int doubleAndGive(int *arr, int n);

int main(){

int n;
printf("Enter the size of the array: ");
scanf("%d", &n);

printf("Enter elements of the array:\n");

int arr[n];

for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

printf("Before Processing: ");
for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
}

doubleAndGive(arr, n);

printf("\nAfter proceessing: ");
for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
}

return 0;
}

int doubleAndGive(int *arr, int n){

for(int i = 0; i < n-1; i++){

 arr[i+1] = arr[i]*2 + arr[i+1];
 arr[i] = 0;

}


}
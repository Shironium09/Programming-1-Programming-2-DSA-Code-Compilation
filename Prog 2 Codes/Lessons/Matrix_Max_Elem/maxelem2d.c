#include <stdio.h>

int main(){

int n, m;
int greatest = 0;

printf("Enter the number of rows: ");
scanf("%d", &n);

printf("Enter the number of columns: ");
scanf("%d", &m);

int arr[n][m];

printf("Enter the elements of the array:\n");

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        scanf("%d", &arr[i][j]);
        
        if(arr[i][j] > greatest){
            greatest = arr[i][j];
        }
    }
}

printf("Maximum element in the array is: %d", greatest);

return 0;
}
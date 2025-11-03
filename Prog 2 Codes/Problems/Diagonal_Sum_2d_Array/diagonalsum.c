#include <stdio.h>

int main(){
    
int n;
int sum = 0;

printf("Enter the size of the matrix: ");
scanf("%d", &n);

int arr[n][n];

printf("Enter the elements of the matrix:\n");

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        scanf("%d", &arr[i][j]);

                if(i == j){
            sum += arr[i][j];
        }
    }
}

printf("The diagonal sum of the matrix is: %d", sum);

return 0;
}
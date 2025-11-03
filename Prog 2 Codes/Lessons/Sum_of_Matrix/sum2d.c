#include <stdio.h>

int main(){

int n, m;
int sum = 0;

printf("Enter the number of rows and columns: ");
scanf("%d %d", &n, &m);

int matrix[n][m];

printf("Enter the elements of the array:\n");

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        scanf("%d", &matrix[i][j]);

        sum += matrix[i][j];
    }
}

printf("Sum of all elements: %d", sum);

return 0;
}
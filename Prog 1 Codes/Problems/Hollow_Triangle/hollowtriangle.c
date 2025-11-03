#include <stdio.h>

int main(){

int n;
printf("Enter size of the triangle: ");
scanf("%d", &n);

int temp = n;

for(int i = 1; i <= n; i++){


    for(int space = temp; space >= i; space--){

        printf(" ");

    }

    for(int k = 1; k <= (i*2)-1; k++){

  
    if(i == 1 || i == n){
        printf("*");
    }
    else if(i > 1 && i < n){

        if(k > 1 && k < (i*2)-1){
            printf(" ");
        }
        else{
            printf("*");
        }

    }

    }

printf("\n");

}


}
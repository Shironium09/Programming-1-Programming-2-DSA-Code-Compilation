#include <stdio.h>

int main(){

int n;
printf("Enter box size: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){

    for(int k = 1, l = 1 ; k <= (i*2)-1; k++, l++){

        if(l == 10){
            l = 1;
        }

        printf("%d", l);
    }

printf("\n");

}

}
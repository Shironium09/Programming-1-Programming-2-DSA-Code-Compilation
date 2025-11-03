#include <stdio.h>

int n;

void countingFunction(){

int j = 1;
printf("\n");
printf("Counting...\n");

do{
    int k = 0;
    do{
        printf("%d\t", j);
        j++;
        k++;
        if(k%10 == 0){
            printf("\n");
        }
    }
    while(k < n);

    }
    while(j <= n);
}


int main(){
    
while(1){
    
printf("Count from 1 up to ? ");
scanf("%d", &n);

if(n <= 0){
    printf("Number must be between 1-100!\n");
    continue;
}
else if(n >= 101){
    printf("Number must be between 1-100!\n");
    continue;
}
else{
    break;
}
    
}

countingFunction();    

}
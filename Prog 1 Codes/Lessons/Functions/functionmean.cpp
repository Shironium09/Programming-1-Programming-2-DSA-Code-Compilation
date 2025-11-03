#include <stdio.h>

void getCalculation(float num1){
    float final=(num1*10)/2;
    
    printf("Result: %.2f", final);
}

int main(){
    float num1;
    
    printf("Enter a number: ");
    scanf("%f", &num1);
    
    getCalculation(num1);
    
return 0;
}

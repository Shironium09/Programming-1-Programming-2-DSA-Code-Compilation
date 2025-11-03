#include <stdio.h>
#include <string.h>

float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

int main(){

float x, y;
char z;

printf("First digit: ");
scanf("%f", &x);
printf("Operation (+,-,*,/): ");
scanf("%s", &z);
printf("Second Digit: ");
scanf("%f", &y);

switch(z){
case '+':
add(x, y);
break;

case '-':
subtract(x, y);
break;

case '*':
multiply(x, y);
break;

case '/':
divide(x, y);
break;

default:
printf("Error! Operation not found!");
break;
}

return 0;
}

float add(float x, float y){
float sum=x+y;
printf("Answer: %.2f", sum);
}

float subtract(float x, float y){
float diff=x-y;
printf("Answer: %.2f", diff);
}

float multiply(float x, float y){
float prod=x*y;
printf("Answer: %.2f", prod);
}

float divide(float x, float y){
if(y == 0){
printf("Error! Cannot divide by Zero!");
}
else{
float quo=x/y;
printf("Answer: %.2f", quo);
}
}

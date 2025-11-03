#include <stdio.h>

int main()
{
int a, b;

printf("Input cost price: ");
scanf("%d", &a);
printf("Input selling price: ");
scanf("%d", &b);

if(a > b){
int loss=a-b;
printf("Loss: %d", loss);
}
else if(b > a){
int gain=b-a;
printf("Profit: %d", gain);
}
else{
printf("There is no profit or gain");
}

return 0;
}

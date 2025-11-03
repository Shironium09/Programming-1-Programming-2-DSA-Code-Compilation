#include <stdio.h>

int main(){
	
	int a, b;
	int sum, difference, quotient, product;
	
	printf("Pick a number\n");
	scanf("%d", &a);
	
	printf("Pick another number\n");
	scanf("%d", &b);
	
	sum=a+b;
	product=a*b;
	
	printf("\nSum: %d", sum);
	
	if(a < b){
		printf("\nDifference: Error, first digit must be larger than the second digit");
	}
	else{
		difference=a-b;
		printf("\nDifference: %d", difference);
	}
	
	printf("\nProduct: %d", product);
	
	if(a < b){
		printf("\nQuotient: Error, first digit must be larger than the second digit");
	}
	else{
		quotient=a/b;
		printf("\nQuotient: %d", quotient);
	}
	
return 0;
}

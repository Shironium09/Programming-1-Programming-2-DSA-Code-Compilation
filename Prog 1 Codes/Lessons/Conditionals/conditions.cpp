#include <stdio.h>
int main(){
	int a, b, c;
	int sum, difference, product, quotient, remainder;
	
	printf("Please Enter the First Integer\n");
	scanf("%d", &a);
	
	printf("Please Enter the Second Integer\n");
	scanf("%d", &b);
	
	printf("\n");
	printf("You have chosen: %d and %d\n", a, b);
	printf("\n");
		
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	remainder=a%b;
	
	printf("\n");

	if(a > b){
	printf("Larger Number: %d\n", a);
	}
	else if(a < b){
	printf("Larger Number: %d\n", b);
	}

	
	if(a < b){
	printf("Smaller Number: %d\n", a);
	}	
	else if(a > b){
	printf("Smaller Number: %d\n", b);
	}

	printf("\n");
		
	printf("Sum:%d\n", sum);
	printf("Difference:%d\n", difference);
	printf("Product:%d\n", product);
	printf("Quotient:%d\n", quotient);
	printf("Remainder:%d\n", remainder);
	
	printf("\n");
	
	if(a > 0 && b > 0){
	printf("All numbers are postive\n");
	}	
	else if(a < 0 && b < 0){
	printf("All numbers are negative\n");
	}	
	else printf("The numbers are mixed\n");

	printf("\n");
	
	if(a%2 == 0 || b%2 == 0){
	printf("At least one of the number is a multiple of 2\n");
	}	
	else if(a%2 != 0 && b%2 != 0){
	printf("Non of the numbers is a multiple of 2\n");
	}

	return 0;
	
}

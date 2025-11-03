#include <stdio.h>
int main(){
	int x;
	const int y=2, z=1, f=5, h=3, s=7;
	
	printf("Enter a number\n");
	scanf("%d", &x);
	
	if(x == y || x == f || x == h || x == s){ 
	printf("The number is a prime number\n");
	}
	else if(x == z || x == 0){ 
	printf("The number is not a prime number\n");
	}
	else if(x > y && x%2 == 0 || x > y && x%3 == 0 || x > y && x%5 == 0 || x > y && x%7 == 0){
	printf ("The number is not a prime number");
 	}
 	else
 	printf ("The number is a prime number");

	return 0;
}

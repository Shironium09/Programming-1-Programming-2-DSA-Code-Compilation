#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	srand(time(NULL));
	int min=0;
	int max=100;
	
	int x;
	int r = min + rand() % (max - min + 1);
	
	printf("Select a number from 1 to 100\n");
	scanf("%d", &x);
	
	printf("The number is: %d\n", r);
	
	if(x == r || (r-10) < x > (r+10)){
	printf("You win!\n");
	}
	else
	printf("You lose!\n");
	
return 0;
}

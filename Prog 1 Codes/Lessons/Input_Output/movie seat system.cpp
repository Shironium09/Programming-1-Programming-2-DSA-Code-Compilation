#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100];
	
	printf("Welcome to the theatre! Please select which movie you want to watch!");
	printf("\nMovie: ");
	fgets(str, sizeof(str), stdin);
	
	printf("You have chosen: %s", str);
	
	size_t i = strlen(str);
	if(i > 0 && str[i-1] == '\n'){
	str[i-1]='\0';
	}
	
	printf("\nPlease choose a seat!\n");
	
printf("[1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9]  [10] [11] [12] [13] [14] [15]\n");
	
	int a=15;
	while (a < 30){
		a++;
		printf("[%d] ", a);
	}
	printf("\n");
	
		a=30;
	while (a < 45){
		a++;
		printf("[%d] ", a);
	}
	printf("\n");
	
	a=45;
	while (a < 60){
		a++;
		printf("[%d] ", a);
	}
	printf("\n");
	
			a=60;
	while (a < 75){
		a++;
		printf("[%d] ", a);
	}
	printf("\n");
	
	a=75;
	while (a < 90){
		a++;
		printf("[%d] ", a);
	}
	printf("\n");
	
	printf("\nChosen seat: ");
	scanf("%d", &a);
	
	printf("\nThank you for choosing this Cinema! You have chosen the movie %s and the seat number %d, enjoy the movie!", str, a);
}

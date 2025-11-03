#include <stdio.h>

int main(){
	int a, b;
	char name1, name2, name3;
	
	printf ("Please enter the first three letters of your name\n");
	scanf ("%c %c %c", &name1, &name2, &name3);
	
	printf ("Please enter your age\n");
	scanf ("%d", &a, &b);
	
	printf ("Your name starts with %c %c %c and your age is %d years old\n", name1, name2, name3, a, b);
	
	return 0;
}

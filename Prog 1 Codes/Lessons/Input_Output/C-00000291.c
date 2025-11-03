#include<stdio.h>

int main (){
	int choice, num;

	printf("\n:(");
	printf("\n");
	printf("\nYour PC ran into a problem and needs to restart. We're");
	printf("\njust collecting some error info, and then we'll restart");
	printf("\nfor you");
	printf("\n");
	
	printf("\nPress 1 to continue...\n");
	scanf("%d",&choice);
	if(choice==1){
		num = 0;
		while(num<=100){
			printf("\n%d%% complete",num);
			num = num + 20;
		}
    }else{
		printf("\n Better Luck Next Time");
	}
	
	printf("\n");
	printf("\nFor more information about the current courses, visit https://ismis.usc.edu.ph.");
	printf("\n");
	return 0;
}

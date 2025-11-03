#include <stdio.h>

int main() {
int a, b, c, d, e;

printf("First grade: ");
scanf("%d", &a);
printf("Second grade: ");
scanf("%d", &b);
printf("Third grade: ");
scanf("%d", &c);
printf("Fourth grade: ");
scanf("%d", &d);
printf("Fifth grade: ");
scanf("%d", &e);

double percentage=(a+b+c+d+e)/5;

printf("Percentage: %.2lf % \n", percentage);

 if(percentage >= 90){
    printf("Grade A");
 }
 else if(percentage >= 80){
     printf("Grade B");
 }
 else if(percentage >= 70){
     printf("Grade C");
 }
 else if(percentage >= 60){
     printf("Grade D");
 }
 else if(percentage >= 40){
     printf("Grade E");
 }
 else if(percentage < 40){
     printf("Grade F");
 }

 return 0;
}

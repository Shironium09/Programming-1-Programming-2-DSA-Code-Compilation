#include <stdio.h>

int main(){

int i, j=0;
int flag = 0;

while(1){
    printf("Input a number: ");
    scanf("%d", &i);

    if(i == 0){
        break;
    }

    if(j <= i){
        j = i;
        flag++;

        if(flag == 3){
            break;
        }
        else{
            continue;
        }
    }
    else{
        continue;
    }

}

if(flag == 3){
    printf("\nProgram ended due to 3 changes in the Greatest Number\n");
}
else{
    printf("\nProgram ended due to an input of 0\n");
}

printf("\nThe Greatest Number is: %d", j);

return 0;
}
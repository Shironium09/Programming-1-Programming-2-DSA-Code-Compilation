#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char fname[20];
	char lname[20];
}name;

typedef struct{
	int oneHundreds;
	int twoHundreds;
	int fiveHundreds;
	int oneThousands;
}bills;

typedef struct{
	bills bankBills;
	char bankLocation[20];
	int balance;
}bank;

typedef struct{
	name personName;
	bills personBalance;
	int onPersonBalance;
	int bankAccountBalance;
}person;

int main(){

    bank bankInfo;
	//Initialize bank to hold 50 one hundred bills, 50 two hundred bills, 40 five hundred bills, 20 one thousand bills.
    bankInfo.bankBills.oneHundreds = 50;
    bankInfo.bankBills.twoHundreds = 50;
    bankInfo.bankBills.fiveHundreds = 40;
    bankInfo.bankBills.oneThousands = 20;
    
    // printf("%d %d %d %d", bankInfo.bankBills.oneHundreds, bankInfo.bankBills.twoHundreds,
    // bankInfo.bankBills.fiveHundreds, bankInfo.bankBills.oneThousands);
    
	//Initialize their current balance to be the total of all their bills.

    // bankInfo.balance += ((50*100)+(50*200)+(40*500)+(20*1000));
    bankInfo.balance = 55000;

    // printf("%d", bankInfo.balance);

	//Initialize mainPerson to initially hold 0 of all bills, and 0 in onPersonBalance(cash)

    person mainPerson;
    int withdraw;
    
    mainPerson.personBalance.oneHundreds = 0;
    mainPerson.personBalance.twoHundreds = 0;
    mainPerson.personBalance.fiveHundreds = 0;
    mainPerson.personBalance.oneThousands = 0;
    
    mainPerson.onPersonBalance = 0;
    
    printf("Input Bank Location: ");
    scanf(" %s", bankInfo.bankLocation);
    
    printf("Input Client First Name: ");
    scanf(" %s", mainPerson.personName.fname);
    
    printf("Input Client Last Name: ");
    scanf(" %s", mainPerson.personName.lname);
    
    printf("Input Clients Current Bank Account Balance: ");
    scanf("%d", &mainPerson.bankAccountBalance);
    
    printf("Input amount to Withdraw: ");
    scanf("%d", &withdraw);
    
    if(withdraw > bankInfo.balance){
        
        int excess = withdraw - bankInfo.balance;
        
        printf("\n\n\nThe bank currently does not hold funds to process this transaction\n");
        printf("The excess amount of %d has been issued to your account!", excess);
        
        withdraw -= excess;
    }
    
    
    while(mainPerson.onPersonBalance < withdraw){
        
        while(1){
            
            if(bankInfo.bankBills.oneThousands == 0 || 
            mainPerson.onPersonBalance == withdraw){
                break;
            }
            
            mainPerson.onPersonBalance += 1000;
            bankInfo.balance -= 1000;
            mainPerson.personBalance.oneThousands++;
            bankInfo.bankBills.oneThousands--;
            
        }
        
        if(bankInfo.bankBills.oneThousands == 0){
            
            while(1){
            
            if(bankInfo.bankBills.fiveHundreds == 0 || 
            mainPerson.onPersonBalance == withdraw){
                break;
            }
            
            mainPerson.onPersonBalance += 500;
            bankInfo.balance -= 500;
            mainPerson.personBalance.fiveHundreds++;
            bankInfo.bankBills.fiveHundreds--;
            
            }
            
        }
        else if(bankInfo.bankBills.oneThousands == 0 &&
        bankInfo.bankBills.fiveHundreds == 0){
            
            while(1){
                
            if(bankInfo.bankBills.twoHundreds == 0 || 
            mainPerson.onPersonBalance == withdraw){
                break;
            }
            
            
            mainPerson.onPersonBalance += 200;
            bankInfo.balance -= 200;
            mainPerson.personBalance.twoHundreds++;
            bankInfo.bankBills.twoHundreds--;
            
            }
            
        }
        else if(bankInfo.bankBills.oneThousands == 0 &&
        bankInfo.bankBills.fiveHundreds == 0 && 
        bankInfo.bankBills.twoHundreds == 0){
            
            while(1){
                
            if(bankInfo.bankBills.oneHundreds == 0 || 
            mainPerson.onPersonBalance == withdraw){
                break;
            }
            
            mainPerson.onPersonBalance += 100;
            bankInfo.balance -= 100;
            mainPerson.personBalance.oneHundreds++;
            bankInfo.bankBills.oneHundreds--;
            
            }
            
        }
        
        
    }
    
    mainPerson.bankAccountBalance -= mainPerson.onPersonBalance;
    
    printf("\n\n\n%s %s's Balance\n", mainPerson.personName.fname, mainPerson.personName.lname);
    printf(" One Thousand Bills: %d\n", mainPerson.personBalance.oneThousands);
    printf(" Five Hundred Bills: %d\n", mainPerson.personBalance.fiveHundreds);
    printf(" Two Hundred Bills: %d\n", mainPerson.personBalance.twoHundreds);
    printf(" One Hundreds Bils: %d\n", mainPerson.personBalance.oneHundreds);
    printf(" Current On Hand Balance: %d\n", mainPerson.onPersonBalance);
    printf(" Current Account Balance: %d\n", mainPerson.bankAccountBalance);
    

    
    
    printf("\n\n%s Branch Bank Balance\n", bankInfo.bankLocation);
    printf(" One Thousand Bills: %d\n", bankInfo.bankBills.oneThousands);
    printf(" Five Hundred Bills: %d\n", bankInfo.bankBills.fiveHundreds);
    printf(" Two Hundred Bills: %d\n", bankInfo.bankBills.twoHundreds);
    printf(" One Hundreds Bils: %d\n", bankInfo.bankBills.oneHundreds);
    printf(" Current Bank Balance: %d", bankInfo.balance);
    

	return 0;
}
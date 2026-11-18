#include <stdio.h>


void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {
    // Banking Program:

    int choice = 0;
    float balance = 0.0f;

    printf("*** Welcome to The bank! ***\n");

    printf("Choose an option (1 - 4): \n");

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdrwal Money\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("Thanks for using the Bank!");
        default:
            break;
        }

    } while (choice != 4);



    return 0;
}

void checkBalance(float balance) {
    printf("Your Balance is: $%.2f\n", balance);
}

float deposit() {
    float depositAmount = 0.0f;
    printf("Enter a deposit amount: $");
    scanf("%f", &depositAmount);

    if (depositAmount < 0) {
        printf("You can't deposit a negative amount!\n");
        return 0.0f;
    } else {
        return depositAmount;
    }
}

float withdraw(float balance) {
    float withdrawAmount = 0.0f;
    printf("Enter an amount To withdraw: $");
    scanf("%f", &withdrawAmount);
    
    if (withdrawAmount > balance) {
        printf("Insufficient balance!\n");
        return 0.0f;
    } 
    else if (withdrawAmount < 0) {
        printf("You can't withdraw a negative amount!");
        return 0.0f;

    } 
    else {
        printf("Withdraw Successfully!\n");
        return withdrawAmount;
    } 
    
}
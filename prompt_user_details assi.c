#include <stdio.h>

int main() {
    int bank_balance;
    int height;
    int phone_number;

    printf("Enter bank balance: ");
    scanf("%d", &bank_balance);

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Enter phone number: ");
    scanf("%d", &phone_number);

    printf("Hey, your balance is %d, your height is %d cm, and your number is %d.\n",
           bank_balance, height, phone_number);

    return 0;
}

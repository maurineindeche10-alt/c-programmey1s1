/* write a program that computes the shiping charges
order below 500 kes=100ksh shipping fee
btn 500-2000=50
above 2000=free
additionaly if it is fragile add 50kes hadling fee 
program to compute amount*/
#include <stdio.h>
int main(){
    int order_amount, shipping_fee ;
    char fragile;
    printf("enter order amount: ");
    scanf("%d", &order_amount);
    if (order_amount<500){
        shipping_fee = 100;
    }
    else if (order_amount>=500 && order_amount<=2000){
        shipping_fee = 50;
    }
    else {
        shipping_fee = 0;
    }

    printf("Is the item fragile? (y/n): ");
    scanf(" %c", &fragile);
    if (fragile == 'y' || fragile == 'Y') {
        shipping_fee = shipping_fee + 50;
    }
    printf("the total shipping fee is ksh. %d\n", shipping_fee);
    return 0;
}
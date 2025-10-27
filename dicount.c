/*discount
amount<1000, no discount
btn 1000 and 5000: 5% discount
greaterthan 5000, 10% discount*/
#include <stdio.h>
int main(){
    float amount, discount, amount_payable;
    printf("enter purchase amount:");
    scanf("%f", &amount);
    if(amount>5000){
        discount = 0.1 * amount;

    }
    else if(amount>=1000 && amount<=5000){
        discount = 0.05 * amount;
    }
    else{
        discount = 0;

    }
    amount = amount - discount;
    amount_payable = amount;
    printf("the discount is ksh %.2f \n", discount);
    printf("the total amount after the discount is  ksh. %.2f", amount_payable);
    return 0;
}
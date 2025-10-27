/*
calaulate electric bills
first 100units at ksh10 per unit
next 100 units 15 per unit
above 200 ksh 20 per unit
*/
#include <stdio.h>
//function prototype
float calculateElectricBill(int units);
//main function
void main() {
    int units;
    float bill;
    printf("Enter number of electricity units consumed: ");
    scanf("%d", &units);
    bill = calculateElectricBill(units);
    printf("Total electricity bill: Ksh %.2f\n", bill);
}
//function declaration
float calculateElectricBill(int units) {
    float bill;
    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }
    return bill;
}
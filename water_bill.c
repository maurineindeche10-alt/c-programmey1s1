/*
0-30units=20kes per unit
31-60units= 25ksper unit
above 60units=30kes per unit

*/
#include <stdio.h>
int main(){
    float units, bills;
    printf("enter amout of units consumed\n");
    scanf("%f", &units);
    if (units <= 30){
        bills = units *20;
        printf("your bill is %.2f ksh\n", bills);
    }
    else if (units >30 && units <=60){
        bills = (units *25);
        printf("your bill is %.2f ksh\n", bills);
    }
    else if (units >60){
        bills = (units * 30);
        printf("your bill is %.2f ksh\n", bills);

    }
    return 0;
}
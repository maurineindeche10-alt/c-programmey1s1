/*
function to calculate fare
rate for fare is 50ksh per km
*/
#include <stdio.h>
//function prototype
int calculateFare(int distance);
//main function
void main() {
    int distance, fare_amount;
    printf("Enter distance traveled in km: ");
    scanf("%d", &distance);    
    fare_amount = calculateFare(distance);
    printf("Total Fare: Ksh %d\n", fare_amount);
}
//function declaration
int calculateFare(int distance) {
    int fare;
    fare = distance * 50;
    return fare;
}
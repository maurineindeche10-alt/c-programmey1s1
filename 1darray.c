/*
Description: Program to calculate total revenue 
*/




#include <stdio.h>

int main() {
    double revenue[7];     // Array to store revenue for 7 days
    double total = 0.0;    // Total revenue
    double average;        // Average revenue
    int i;

    printf("=== Weekly Revenue Tracker ===\n");

    // Get revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ksh", i + 1);

        // Check if input is valid
        if (scanf("%lf", &revenue[i]) != 1) {
            printf("Invalid input! Setting revenue to ksh0.00 for Day %d.\n", i + 1);
            revenue[i] = 0.0;

            // Clear any bad input from buffer
            while (getchar() != '\n');
        }

        total += revenue[i]; // Add to total
    }

    // Calculate average
    average = total / 7.0;

    // Show results
    printf("\n--- Weekly Summary ---\n");
    printf("Total Revenue: ksh%.2lf\n", total);
    printf("Average Daily Revenue: ksh%.2lf\n", average);

    return 0;
}
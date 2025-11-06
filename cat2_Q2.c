#include <stdio.h>

// Function prototypes
double calculateGrossPay(double hours, double wage);
double calculateTaxes(double grossPay);
void displayPayroll(double hours, double wage, double grossPay, double taxes, double netPay);

int main() {
    double hoursWorked, hourlyWage;
    
    printf("=== Payroll Calculator ===\n");
    
    // Get hours worked with validation
    do {
        printf("Enter hours worked in the week: ");
        if (scanf("%lf", &hoursWorked) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        if (hoursWorked < 0) {
            printf("Hours cannot be negative! Please enter a positive number.\n");
        }
    } while (hoursWorked < 0);
    
    // Get hourly wage with validation
    do {
        printf("Enter hourly wage: $");
        if (scanf("%lf", &hourlyWage) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }
        if (hourlyWage < 0) {
            printf("Wage cannot be negative! Please enter a positive number.\n");
        }
    } while (hourlyWage < 0);
    
    // Calculate payroll components
    double grossPay = calculateGrossPay(hoursWorked, hourlyWage);
    double taxes = calculateTaxes(grossPay);
    double netPay = grossPay - taxes;
    
    // Display results
    displayPayroll(hoursWorked, hourlyWage, grossPay, taxes, netPay);
    
    return 0;
}

// Function to calculate gross pay with overtime
double calculateGrossPay(double hours, double wage) {
    double grossPay;
    
    if (hours <= 40) {
        grossPay = hours * wage;
    } else {
        // Regular pay for first 40 hours + overtime (time and a half)
        double regularPay = 40 * wage;
        double overtimeHours = hours - 40;
        double overtimePay = overtimeHours * wage * 1.5;
        grossPay = regularPay + overtimePay;
    }
    
    return grossPay;
}

// Function to calculate taxes based on the given tax brackets
double calculateTaxes(double grossPay) {
    double taxes;
    
    if (grossPay <= 600) {
        // 15% tax on entire amount
        taxes = grossPay * 0.15;
    } else {
        // 15% on first $600 + 20% on the rest
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
    
    return taxes;
}

// Function to display payroll information in a formatted manner
void displayPayroll(double hours, double wage, double grossPay, double taxes, double netPay) {
    printf("\n \t PAYROLL SUMMARY \n");
    printf("Hours worked: %.2f hours\n", hours);
    printf("Hourly wage: $%.2f\n", wage);
    printf("Gross pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", netPay);
    printf(" _____\n");
    
    // Additional breakdown for overtime cases
    if (hours > 40) {
        printf("\n \t Overtime Breakdown \n");
        printf("Regular hours (40): $%.2f\n", 40 * wage);
        printf("Overtime hours (%.2f): $%.2f\n", hours - 40, (hours - 40) * wage * 1.5);
    }
    
    // Tax breakdown
    printf("\n \t Tax Breakdown \n");
    if (grossPay <= 600) {
        printf("15%% tax on $%.2f: $%.2f\n", grossPay, taxes);
    } else {
        printf("15%% tax on first $600: $%.2f\n", 600 * 0.15);
        printf("20%% tax on remaining $%.2f: $%.2f\n", grossPay - 600, (grossPay - 600) * 0.20);
    }
}
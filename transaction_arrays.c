#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "/home/geoffrey/Desktop/assignments/output/output.txt";
    double transaction;
    double totalSales = 0.0;
    int transactionCount = 0;
    
    // Open the file for reading
    file = fopen(filename, "r");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open %s file.\n", filename);
        printf("Please make sure the file exists in the current directory.\n");
        return 1;
    }
    
    printf("Daily Sales Report \n");
    printf("Reading transactions from %s...\n\n", filename);
    
    // Read all transactions from the file
    while (fscanf(file, "%lf", &transaction) == 1) {
        totalSales += transaction;
        transactionCount++;
        printf("Transaction %d: $%.2f\n", transactionCount, transaction);
    }
    
    // Check if we encountered an error during reading
    if (!feof(file)) {
        printf("\nWarning: File may not have been read completely.\n");
    }
    
    // Close the file
    fclose(file);
    printf("\nFile has been properly closed.\n");
    
    // Display the results
    printf("\n Summary \n");
    printf("Total transactions processed: %d\n", transactionCount);
    printf("Total sales for the day: $%.2f\n", totalSales);
    
    return 0;
}
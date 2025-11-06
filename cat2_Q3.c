/*
geoffrey muthoka
ct101/g/24436/24
programming cat
*/
#include <stdio.h>
#include <stdlib.h>

#define NUM_COUNT 10

// Function prototypes
void inputIntegersToFile();
void processIntegersAndWrite();
void displayFileContents();
int handleFileError(FILE *file, const char *filename, const char *mode);

int main() {
    int choice;
    
    do {
        printf("\n=== Integer File Processing Program ===\n");
        printf("1. Input 10 integers to input.txt\n");
        printf("2. Process integers and write results to output.txt\n");
        printf("3. Display contents of both files\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        
        switch (choice) {
            case 1:
                inputIntegersToFile();
                break;
            case 2:
                processIntegersAndWrite();
                break;
            case 3:
                displayFileContents();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
    
    return 0;
}

// Function to handle file errors
int handleFileError(FILE *file, const char *filename, const char *mode) {
    if (file == NULL) {
        printf("Error: Could not open file '%s' in mode '%s'\n", filename, mode);
        perror("Reason");
        return 1; // Error occurred
    }
    return 0; // No error
}

// Function 1: Prompt user to input 10 integers and store them in input.txt
void inputIntegersToFile() {
    FILE *file = fopen("input.txt", "w");
    if (handleFileError(file, "input.txt", "write")) {
        return;
    }
    
    printf("Enter %d integers:\n", NUM_COUNT);
    
    for (int i = 0; i < NUM_COUNT; i++) {
        int num;
        printf("Enter integer %d: ", i + 1);
        
        if (scanf("%d", &num) != 1) {
            printf("Invalid input! Please enter integers only.\n");
            while (getchar() != '\n'); // Clear input buffer
            i--; // Retry this input
            continue;
        }
        
        fprintf(file, "%d\n", num);
    }
    
    fclose(file);
    printf("Successfully wrote %d integers to 'input.txt'\n", NUM_COUNT);
}

// Function 2: Read integers from "input.txt", calculate sum and average, write to "output.txt"
void processIntegersAndWrite() {
    FILE *inputFile = fopen("input.txt", "r");
    if (handleFileError(inputFile, "input.txt", "read")) {
        return;
    }
    
    FILE *outputFile = fopen("output.txt", "w");
    if (handleFileError(outputFile, "output.txt", "write")) {
        fclose(inputFile);
        return;
    }
    
    int numbers[NUM_COUNT];
    int sum = 0;
    int count = 0;
    
    // Read integers from file
    printf("Reading integers from input.txt...\n");
    for (int i = 0; i < NUM_COUNT; i++) {
        if (fscanf(inputFile, "%d", &numbers[i]) == 1) {
            sum += numbers[i];
            count++;
            printf("Read number: %d\n", numbers[i]);
        } else {
            printf("Warning: Could not read integer at position %d\n", i + 1);
        }
    }
    
    // Calculate average
    double average = 0.0;
    if (count > 0) {
        average = (double)sum / count;
    }
    
    // Write results to output file
    fprintf(outputFile, "Sum of integers: %d\n", sum);
    fprintf(outputFile, "Average of integers: %.2f\n", average);
    fprintf(outputFile, "Total numbers processed: %d\n", count);
    
    fclose(inputFile);
    fclose(outputFile);
    
    printf("Successfully processed %d integers and wrote results to 'output.txt'\n", count);
    printf("Sum: %d, Average: %.2f\n", sum, average);
}

// Function 3: Read and display contents of both files in formatted manner
void displayFileContents() {
    printf("\n  Contents of input.txt \n");
    FILE *inputFile = fopen("input.txt", "r");
    if (handleFileError(inputFile, "input.txt", "read")) {
        return;
    }
    
    int num, count = 0;
    printf("Integers in input.txt:\n");
    while (fscanf(inputFile, "%d", &num) == 1) {
        printf("  Number %d: %d\n", ++count, num);
    }
    
    if (count == 0) {
        printf("  File is empty or contains no valid integers.\n");
    }
    
    fclose(inputFile);
    
    printf("\n Contents of output.txt \n");
    FILE *outputFile = fopen("output.txt", "r");
    if (handleFileError(outputFile, "output.txt", "read")) {
        return;
    }
    
    char line[100];
    printf("Results in output.txt:\n");
    while (fgets(line, sizeof(line), outputFile) != NULL) {
        printf("  %s", line);
    }
    
    fclose(outputFile);
    printf("\n");
}
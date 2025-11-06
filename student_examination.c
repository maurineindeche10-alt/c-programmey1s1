#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure to hold student information
struct Student {
    char name[100];
    int registrationNumber;
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    
    // Open the binary file for reading
    file = fopen("/home/geoffrey/Desktop/assignments/output/borrowed_books.txt", "rb");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open results.dat file.\n");
        printf("The file may not exist or cannot be accessed.\n");
        return 1;
    }
    
    printf("=== Student Examination Results ===\n");
    printf("------------------------------------\n");
    printf("%-30s %-10s\n", "Student Name", "Total Marks");
    printf("------------------------------------\n");
    
    // Read and display all student records
    int recordCount = 0;
    
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("%-30s %-10.2f\n", student.name, student.totalMarks);
        recordCount++;
    }
    
    // Check if we reached end of file or encountered an error
    if (feof(file)) {
        printf("------------------------------------\n");
        printf("Total records displayed: %d\n", recordCount);
    } else {
        printf("Error reading file completely.\n");
    }
    
    // Close the file
    fclose(file);
    
    return 0;
}
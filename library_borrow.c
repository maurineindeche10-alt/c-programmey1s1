#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char bookTitle[100];
    char choice;
    
    // Open file in append mode to preserve existing records
    file = fopen("borrowed_books.txt", "a");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("=== Library Book Tracking System ===\n");
    
    do {
        // Get book title from user
        printf("\nEnter the book title: ");
        fgets(bookTitle, sizeof(bookTitle), stdin);
        
        // Remove newline character from fgets input
        bookTitle[strcspn(bookTitle, "\n")] = 0;
        
        // Write title to file
        fprintf(file, "%s\n", bookTitle);
        
        // Display confirmation message
        printf("✓ Book title '%s' has been successfully stored in borrowed_books.txt\n", bookTitle);
        
        // Ask if user wants to continue
        printf("\nDo you want to enter another book title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear the input buffer
        
    } while (choice == 'y' || choice == 'Y');
    
    // Close the file
    fclose(file);
    
    printf("\nThank you for using the Library Book \n");
    
    return 0;
}
/*
 Description, branches overview 
 */
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10]; // 3D array: 3 branches, 5 floors, 10 rooms
    int branch_occupied[3] = {0}; // Track occupied rooms per branch
    int total_occupied = 0;
    
    // Seed random number generator
    srand(time(NULL));
    
    printf("=== Multiple Branches Overview ===\n\n");
    
    // Generate random occupancy data for all branches
    printf("Generating random occupancy data for all branches...\n");
    for(int branch = 0; branch < 3; branch++) {
        for(int floor = 0; floor < 5; floor++) {
            for(int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
            }
        }
    }
    
    // Calculate occupied rooms per branch and total
    for(int branch = 0; branch < 3; branch++) {
        for(int floor = 0; floor < 5; floor++) {
            for(int room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1) {
                    branch_occupied[branch]++;
                    total_occupied++;
                }
            }
        }
    }
    
    // Display results
    printf("\n--- Multiple Branches Occupancy Report ---\n");
    printf("Branch\tOccupied Rooms\tVacant Rooms\tTotal Rooms\n");
    printf("------\t-------------\t-----------\t-----------\n");
    
    for(int branch = 0; branch < 3; branch++) {
        int vacant = 50 - branch_occupied[branch]; // 5 floors * 10 rooms = 50 rooms per branch
        printf("%d\t%d\t\t%d\t\t50\n", branch + 1, branch_occupied[branch], vacant);
    }
    
    printf("------\t-------------\t-----------\t-----------\n");
    printf("Total\t%d\t\t%d\t\t150\n", total_occupied, 150 - total_occupied);
    
    // Display occupancy rate
    float occupancy_rate = (float)total_occupied / 150 * 100;
    printf("\nOverall Occupancy Rate: %.2f%%\n", occupancy_rate);
    
    // Display detailed branch information
    printf("\n--- Detailed Branch Information ---\n");
    for(int branch = 0; branch < 3; branch++) {
        printf("\nBranch %d Floor-wise Occupancy:\n", branch + 1);
        printf("Floor\tOccupied\tVacant\n");
        printf("-----\t--------\t------\n");
        
        for(int floor = 0; floor < 5; floor++) {
            int floor_occupied = 0;
            for(int room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1) {
                    floor_occupied++;
                }
            }
            printf("%d\t%d\t\t%d\n", floor + 1, floor_occupied, 10 - floor_occupied);
        }
    }
    
    return 0;
}
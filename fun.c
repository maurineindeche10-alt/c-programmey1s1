/*function to add two numbers
*/
#include <stdio.h>
//function prototype
int addition(int x, int y);
//main function
void main () {
    //function call
    /*
    #include <stdio.h>
    int addition(int x, int y); //function prototype
    void main() {
    int result , result_1, result_2;
    result = addition(10, 20);//when you dont need scanf
    result_1 = addition(30, 40);
    result_2 = addition(50, 60);
    printf("Sum: %d\n", result_1);//printing
    printf("Sum: %d\n", result_2);//printing
    printf("Sum: %d\n", result);//printing
   }
    int addition(int x, int y) {
        int sum;
        sum = x + y;
        return (sum);
    }
    */
    int a,b,results;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    results = addition(a, b);
    printf("Sum: %d\n", results);
    
}
//function declaration
int addition(int x, int y) {
    int sum;
    sum = x + y;
    return (sum);
}
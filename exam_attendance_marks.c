/*
write a program that checks eligibility for next level
*/
#include <stdio.h>
int main(){
    float attendance, marks;
    printf("what is your attendance percentage?\n");
    scanf("%f", &attendance);
    printf("what is your marks?\n");
    scanf("%f", &marks);
    if (attendance >= 75 && marks >= 40){
        printf("your are eligible\n");
    }
    else{
        printf("your are not eligible\n");
    }
    return 0;
}
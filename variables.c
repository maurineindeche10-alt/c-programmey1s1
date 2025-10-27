/*
name: maurine indeche
reg no:CT101/G/23746/24
DATE:20/09/2025
program:variables and data types
*/
#include <stdio.h>
int main() {
    char a = 'k';//character print is %c
    char name[] = {"geoffrey"};//array prnt is %s
    int age = 20;//integer print is %d
    float pi = 3.142;//float print if %f
    double profit = 10000.10;//double print is %lf
    //display the results
    printf("the character is %c \n",a);
    printf("the (string) name is %s \n",name);
    printf("the age is %d  \n",age);
    printf("the pi valie is %f \n", pi);
    printf("the profit is %lf", profit);
    /*if you want to specify the number of output like giving a number in two or 3 decimal places
    you use inside the print like {printf(the value of pi is %.2f) in this case the point 2 stands for the number of decimal places you want to be your output}
     also if you want to make a number be of legth 5 digits like {length
     =%5d}
     if you want to add units you add before or afterit eg {printf(the age is %d years) or profit is ksh %lf}*/
    return 0;
} 

/*
name:maurine indeche
reg no:CT101/G/23746/24
DATE:20/09/2024
program:program to add two numbers
*/
#include <stdio.h>
int main() {
    //variable declaration
   float radius, height, volume , area;
    int pi =3.142;
    //prompt user to enter radius
    printf("enter the radius of the cylider: ");
    scanf("%f", &radius);
    //prompt user to enter height
    printf("enter the height of the cylider: ");
    scanf("%f", &height);
    //calculate the volume of the cylider
    volume = pi * radius * radius * height;
    // display the volume
    printf("the volume of the cylider is %.2f \n", volume);
    //calculate the  surface area of the cylider
    area =2 * pi * radius * radius *radius + 2 * pi * radius * height;
    //display the surface area
    printf("the surface area of the cylider is %.2f ", area);

    return 0;

}

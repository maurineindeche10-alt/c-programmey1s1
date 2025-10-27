/*
convert to celcius function of temparature
formula c = (f - 32) * 5/9
*/
#include <stdio.h>
//function prototype
float convertToCelsius(float fahrenheit);
//main function
void main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2f OC\n", celsius);
}
//function declaration
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}   
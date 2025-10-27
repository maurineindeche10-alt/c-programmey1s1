#include <stdio.h>
float interest(float p, float r, float t);
//main function
/*int main () {
    float result;
    result = interest(1000.0,10.0,5.0);
    printf("Simple Intrest:KSH %.2f\n", result);
    return 0;
}
float interest(float p, float r, float t) {
    float SI;
    SI = p * r/100 * t ;
    return (SI);
}
*/
void main () {
    float results, principle, rate, time;
    printf("Enter principle, rate and time: ");
    scanf("%f %f %f", &principle, &rate, &time);
    results = interest(principle, rate, time);
    printf("Simple Intrest:KSH %.2f\n", results);
}
    float interest(float principle, float rate, float time) {
        float SI;
        SI = principle * rate/100 * time ;
        return (SI);
    }

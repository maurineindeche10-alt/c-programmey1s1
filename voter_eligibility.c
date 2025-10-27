/*DESC: PROGRAM to check voter eligibility*/
#include <stdio.h>
int main(){
    //variable declaration
    int age;
    //prompt user to enter age
    printf("enter your age:  \t");//\t tabwhich is 4 spaces
    scanf("%d", &age);//take user input

    if (age>=18){
        printf("youare eligible to vote");
    }
    else{
        printf("you are not eligible to vote");
    }
    return 0;
}
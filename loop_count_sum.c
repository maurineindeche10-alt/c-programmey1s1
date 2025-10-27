#include <stdio.h>
int main(){
    printf("using while loop. \n");
    int i=1;//starting at
    int sum = 0;
    while(i<=10)//ending at
    {
        printf("%d \n",i);
        i++;//step
        sum += i;//
    }
    printf("the sum is %d", sum);
    return 0;
}
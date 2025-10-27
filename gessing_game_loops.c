#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Generate random number between 1 and 20
    srand(time(0));
    secret = (rand() % 20) + 1;

    printf("🎮 Guess the number (between 1 and 20): ");

    while (1) {
        scanf("%d", &guess);
        attempts++;  // count each guess

        if (guess > secret) {
            printf("Too high! Try again: ");
        } else if (guess < secret) {
            printf("Too low! Try again: ");
        } else {
            printf("🎉 Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}

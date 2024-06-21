#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is divisible by 17
    if (number % 17 == 0) {
        printf("%d is divisible by 17.\n", number);
    } else {
        printf("%d is not divisible by 17.\n", number);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int x, y, d1, d2, d3, d4, d5;

    printf("Enter a 5-digit number: \n");

    // Input validation loop
    while (1) {
        if (scanf("%d", &x) != 1) {
            printf("Error: enter a number: \n");
            while (getchar() != '\n');
            continue;
        }
        // Check if it's a valid 5-digit number
        else if (x >= 10000 && x <= 99999) {
            break;  // Exit the loop if valid
        } else {
            printf("Enter a valid 5-digit number.\n");
        }
    }

    // Calculation of individual digits
    d1 = x % 10;
    d2 = (x / 10) % 10;
    d3 = (x / 100) % 10;
    d4 = (x / 1000) % 10;
    d5 = (x / 10000) % 10;

    // Sum of the digits
    y = d1 + d2 + d3 + d4 + d5;

    // Output the digits and their sum
    printf("%d + %d + %d + %d + %d = %d\n", d5, d4, d3, d2, d1, y);

    return 0;
}



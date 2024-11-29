#include <stdio.h>

int main() {
    float x;
    while (1) {
        printf("Enter a number:\n");
        while (scanf("%f", &x) != 1) {
            printf("Error: enter a valid integer value: \n");
            while (getchar() != '\n');  // Clear the invalid input
        }
        if (x >= 0) {
            printf("%.2f\nIts Square is: %.2f\n\n", x, x*x);
        } else {
            break;
        }
    }
    
    return 0;
}


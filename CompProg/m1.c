#include <stdio.h>

int main() {
    float x, y;
    printf("Enter Temperature in Fahrenheit:\n");
    
    // Input validation loop
    while (scanf("%f", &x) != 1) {
        printf("Error: enter a valid temperature value: \n");
        while (getchar() != '\n');  // Clear the invalid input
    }
    
    // Formula for converting Fahrenheit to Celsius
    y = (x - 32) * 5 / 9;
    
    // Temperature range checking
    if (y < 0) {
        printf("%.2f is %.2f in Celsius\n", x, y);
        printf("Temperature is cold\n");
    } else if (y > 40) {
        printf("%.2f is %.2f in Celsius\n", x, y);
        printf("Temperature is hot\n");
    } else {
        printf("%.2f is %.2f in Celsius\n", x, y);
        printf("Temperature is normal\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int x, y = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;

    printf("Enter a 5-digit number: \n");

    while (1) {
        if (scanf("%d", &x) != 1) {
            printf("Error: enter a number: \n");
            while (getchar() != '\n');
            continue;
        } else if (x >= 10000 && x <= 99999) {
            break;
        } else {
            printf("Enter a valid 5-digit number.\n");
        }
    }

    //Calculation of individual digits
    d1 = x % 10;
    d2 = (x / 10) % 10;
    d3 = (x / 100) % 10;
    d4 = (x / 1000) % 10;
    d5 = (x / 10000) % 10;

    //Sum
    y = d1 + d2 + d3 + d4 + d5;

    //Output
    printf("%d + %d + %d + %d + %d = %d\n", d5, d4, d3, d2, d1, y);

    return 0;
}



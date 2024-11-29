#include <stdio.h>

int main() {
    float x, y = 1;

    printf("Enter a number of digits you want: \n");
    
    while (1) {
        if (scanf("%f", &x) != 1) {
            printf("Error: enter a number: \n");
            while (getchar() != '\n');
            continue;
        }
        else if (x >= 0) {
            break;
        } else {
            printf("Please enter a positive number: \n");
        }
    }

    while (y <= x) {
        printf("%.0f\n", y);
        y++;
    }

    return 0;
}





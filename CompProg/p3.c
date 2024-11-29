#include <stdio.h>
#include <math.h>

int main() {
    float x, y = 0;

    printf("Enter a number: \n");
    while (scanf("%f", &x) != 1) {
        printf("Error: enter a number: \n");
        while (getchar() != '\n');
    }

    if (x > 0) {
        while (y < x) {
            if (fmod(y, 2) == 0) {
                printf("%.0f\n", y);
            }
            y++;
        }
    } else if (x < 0) {
        while (y > x) {
            if (fmod(y, 2) == 0) {
                printf("%.0f\n", y);
            }
            y--;          
        }
    } else {
        printf("There are no numbers between 0 and your given input\n");
    }

    return 0;
}





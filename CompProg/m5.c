#include <stdio.h>
#include <math.h>

int main() {
    float x, y = 0, cube;
    
    printf("Enter a number: \n");
    
    while (scanf("%f", &x) != 1) {
        printf("Error: enter a number: \n");
        while (getchar() != '\n');
    }
    
    if (x >= 0) {
        while (y < x) {
            if (fmod(y, 2) == 1) {
                cube = pow(y, 3);
                printf("%.0f\n", y);
                printf("Its cube is: %.0f\n\n", cube);
            }
            y++;
        }
    }

    else {
        while (y > x) {
            if (fmod(y, 2) == -1) {
                printf("%.0f\n", y);
                printf("Its cube is an Imaginary Number\n\n");
            }
            y--;
        }
    }

    return 0;
}




#include <stdio.h>

int main() {
    float coordinates[4], m = 0, c = 0;
    const char* variable[] = {"X1", "Y1", "X2", "Y2"};
    int x = 0;

    while (x < 4) {
        printf("Enter %s coordinate: \n", variable[x]);
        if (scanf("%f", &coordinates[x]) == 1) {
            x++;
        } else {
            printf("Error! enter a valid %s coordinate value\n", variable[x]);
            while (getchar() != '\n');
        }
    }

    float x1 = coordinates[0], y1 = coordinates[1], x2 = coordinates[2], y2 = coordinates[3];
    //calculations`
    m = (y2 - y1) / (x2 - x1);
    c = y2 - m * x2;

    printf("Equation of the line with endpoints (%.2f, %.2f) and (%.2f, %.2f) : Y = %.2fX ", x1, y1, x2, y2);
    if (c < 0) {
        printf("- %.2f\n", -c);
    } else {
        printf("+ %.2f\n", c);
    }

    return 0;
}






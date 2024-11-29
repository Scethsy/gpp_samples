#include <stdio.h>
//find highest number out of all inputs
void input_validation (float *x) {
    while (1) {
        if (scanf("%f", x) != 1) {
            printf("Error! Enter a valid number of integers: \n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
}

void calculation(float x,float y,float *sum,float *difference,float *interchanged_difference) {
    *sum = x + y;
    *difference = x - y;
    *interchanged_difference = y - x;
}



int main () {
    float a, b, c, d, e;
    printf("Enter 1st number: \n");
    input_validation(&a);
    printf("Enter 2nd number: \n");
    input_validation(&b);
    calculation (a, b, &c, &d, &e);

    printf("Sum:\n%.2f + %.2f = %.2f\n\n", a, b, c);
    printf("Difference:\n%.2f - %.2f = %.2f\n\n", a, b, d);
    printf("Interchanged Difference:\n%.2f - %.2f = %.2f\n\n", b, a, e);

    return 0;
}
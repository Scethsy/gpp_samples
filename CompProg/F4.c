#include <stdio.h>
void input_validation (int *x) {
    while (1) {
        if (scanf("%d", x) != 1) {
            printf("Error! Enter a valid number of integers: \n");
            while (getchar() != '\n');
            continue;
        } else if (*x < 0) {
            printf("Please Enter a positive number of integers: ");
            continue;
        } else {
            break;
        }
    }
}

void input_validation2 (float input[], int x) {
    int limit = x;
    for (int i = 0; i < limit; i++, x--) {
        printf("Enter %d more numbers: \n", x);
        while(scanf("%f",&input[i])!= 1) {
            printf("Error! Enter a valid number:\n");
            while (getchar() != '\n');
        }
    }
}

int main () {
    int x = 0, limit = 0;
    printf("Instructions\n(Enter a group of numbers to find the maximum number)\n\n");
    printf("How many numbers would you like to enter: \n");
    input_validation (&x);

    float input[x];
    input_validation2 (input, x);

    float max = input[0];
    for (int i = 0; i < limit; i++) {
        if (max < input[i]) {
            max = input[i];
        }
    }
    printf("The maximum number among your input is: %.2f\n", max);
    
    return 0;
}
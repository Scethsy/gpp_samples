#include <stdio.h>
//find highest number out of all inputs
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

void max(float input[], int limit, float* maximum) {
    *maximum = input[0];
    for (int z = 1; z < limit; z++) {
        if (input[z] > *maximum) {
            *maximum = input[z];
        }
    }
}
int main () {
    int a, limit = 0;
    printf("How many numbers would you like to enter: \n");
    input_validation(&a);
    float input[a], ma = 0;
    input_validation2(input, a);

    max (input, limit, &ma);
    printf("The largest number is %.2f\n", ma);

    return 0;
}
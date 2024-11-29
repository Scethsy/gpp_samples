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

void Sum_IndivDigits (int x) {
    int indiv[100], sum = 0, last = 0;
    for (int i = 0; x > 0; i++) {
        indiv[i] = x % 10;
        sum += indiv[i];
        x /= 10;
        if (x > 0) {
            printf("%d + ", indiv[i]);
        } else if (x <= 0) {
            printf("%d ", indiv[i]);
        }
    }
    printf("= %d\n", sum);
}


int main () {
    int x = 0;
    printf("Instructions\n(Enter a positive number that would sum its individual digits.)\n\n");
    printf("Enter a positive number: \n");
    input_validation (&x);
    
    Sum_IndivDigits(x);
    
    return 0;
}
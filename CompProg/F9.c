#include <stdio.h>
void input_validation (int *x) {
    while (1) {
        if (scanf("%d", x) != 1) {
            printf("Error! Enter a valid number of integers: \n");
            while (getchar() != '\n');
            continue;
        } else if (*x == 0) {
            printf("There are no numbers between 0 and %d. Please Try Again\n", *x);
        } else {
            break;
        }
    }
}
void Multiples (int x) {
    if (x > 0) {
        for (int i = 0; i < x; i++) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    } else {
        for (int i = 0; i > x; i--) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }
}

int main () {
    int x = 0;
    printf("Instructions\n(Enter a number to print odd numbers between 0 and your number.)\n\n");
    printf("Enter a number: \n");
    input_validation (&x);
    printf("The odd numbers between 0 and %d are:\n", x);
    Multiples(x);

    return 0;
}
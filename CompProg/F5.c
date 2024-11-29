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

void input_validation2 (int *x) {
    while (1) {
        if (scanf("%d", x) != 1) {
            printf("Error! Enter a valid number of integers: \n");
            while (getchar() != '\n');
            continue;
        } else if (*x == 0) {
            printf("Please Enter a non-zero number of integers: ");
            continue;
        } else {
            break;
        }
    }
}
void Multiples (int x, int y) {
    if (x > 0) {
        for (int i = 0; i < x; i++) {
            if (i % y == 0) {
                printf("%d\n", i);
            }
        }
    } else {
        for (int i = 0; i > x; i--) {
            if (i % y == 0) {
                printf("%d\n", i);
            }
        }
    }
}

int main () {
    int x = 0, y = 0;
    printf("Instructions\n(Enter a number that would count multiples of a certain number between 0 and your input.)\n\n");
    printf("Multiples of what number would to want?: \n");
    input_validation (&y);
    
    printf("Enter a number: \n");
    input_validation2 (&x);

    printf("The Multiples of %d between 0 and %d are:\n", y, x);
    Multiples(x, y);
    
    return 0;
}
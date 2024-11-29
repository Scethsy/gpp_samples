#include <stdio.h>
void input_validation (int *x) {
    while (1) {
        if (scanf("%d", x) != 1) {
            printf("Error! Enter a valid number of integers: \n");
            while (getchar() != '\n');
            continue;
        } else if (*x == 0) {
            printf("%d is a zero. Try Again\n", *x);
        } else {
            break;
        }
    }
}

int main () {
    int x = 0;
    printf("Instructions\n(Enter a number to determine if odd or even.)\n\n");
    printf("Enter a number: \n");
    input_validation (&x);
    
    if (x % 2 == 0) {
        printf("%d is an even number.\n", x);
    } else {
        printf("%d is an odd number.\n", x);       
    }

    return 0;
}
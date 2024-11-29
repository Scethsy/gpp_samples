#include <stdio.h>
#include <math.h>
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
void geometric_seq (int x) {
    if (x >= 0) {
        for (int i = 0;i < x; i++) {
            if (fmod(i, 2) == 1) {
                float cube = pow(i, 3); // i*i*i
                printf("%d \nits cube is: \n%.2f\n\n",i ,cube); 
            }
        }
    }
    else {
        for (int i = 0;i > x; i--) {
             if (fmod(i, 2) == -1) {
                printf("%d \nits cube is an Imaginary Number\n\n", i);
            }
        }
    }
}

int main () {
    int x = 0;
    printf("Instructions\n(Enter a number to print their cube between 0 and your number.)\n\n");
    printf("Enter a number: \n");
    input_validation (&x);
    printf("The odd numbers between 0 and %d are:\n", x);
    geometric_seq(x);

    return 0;
}
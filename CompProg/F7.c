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
void numbers_to_enter (int a, float input[]) {
    int limit = a;
    for(int x = 0; x < limit; x++, a--) {
        printf ("Enter Number (%d more): \n", a);
        while(scanf("%f", &input[x])!= 1) {
            printf("Error! Enter a valid number of integers: \n");
            while (getchar() != '\n');
        }
    }
}

int main () {
    int x = 0;
    printf("Instructions\n(Enter a group of numbers to calculate its average.)\n\n");
    printf("How many numbers would you like enter: \n");
    input_validation (&x);
    float input[x];
    numbers_to_enter (x, input);
    float sum = 0, ave = 0;
    for (int i = 0; i < x; i++) {
        sum += input[i];
    }
    ave = sum / x;

    printf("The average of your inputs is %.2f\n", ave);

    return 0;
}
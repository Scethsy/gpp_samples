#include <stdio.h>
//accept an array and make it in ascending order
int main () {
    int a, limit = 0, i = 0;
    printf("Instructions:\n(Enter a group of number to be ordered in ascending order)\n\n");
    printf("Please enter how many numbers you would like to enter: \n");
    while (1) {
        if (scanf("%d", &a) != 1) {
            printf("Error! Enter a valid number of integers: \n");
            while (getchar() != '\n');
            continue;
        } else if (a < 0) {
            printf("Please Enter a positive number of integers: ");
            continue;
        } else {
            break;
        }
    }

    limit = a;
    float input[limit];
    for(i = 0; i < limit; i++, a--) {
        printf("Enter a number (%d more): \n", a);
        while (scanf("%f", &input[i]) != 1) {
            printf("Error! Please enter a valid number value: \n");
            while (getchar() != '\n');
        }
    }
    for (int i = 0; i < limit - 1; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (input[i] > input[j]) {
                // Swap elements
                float holder = input[i];
                input[i] = input[j];
                input[j] = holder;
            }
        }
    }
    for (i = 0; i < limit; i++) {
        printf(" %.0f,", input[i]);
    }

    return 0;
}
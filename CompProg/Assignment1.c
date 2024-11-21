#include <stdio.h>
//accept two different arrays and calculate its sum
int main () {
    int a, b, limit = 0, limita = 0, limitb = 0;
    printf("Instructions \n (Enter two groups of number to be added all together)\n\n");
    printf("How many numbers would you like to enter: \n");
    while (1) {
        if (scanf("%d", &a) != 1) {
            printf("Error! Enter a valid number: \n");
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
    float inputa[limit];
    for (int x = 0; x < limit; x++, a--) {
        printf("Enter a number (%d more): \n", a);
        while (scanf("%f", &inputa[x]) != 1) {
            printf("Error! Enter a valid number: \n");
            while (getchar() != '\n');
        }
    }
    printf("How many numbers would you like to enter again: \n");
    while (1) {
        if (scanf("%d", &b) != 1) {
            printf("Error! Enter a valid number: \n");
            while (getchar() != '\n');
            continue;
        } else if (a < 0) {
            printf("Please Enter a positive number of integers: ");
            continue;
        } else {
            break;
        }
    }
    limitb = b;
    float inputb[limitb];
    for (int y = 0; y < limitb; y++, b--) {
        printf("Enter a number (%d more): \n", b);
        while (scanf("%f", &inputb[y]) != 1) {
            printf("Error! Enter a valid number: \n");
            while (getchar() != '\n');
        }
    }

    float suma = 0, sumb = 0, sum = 0, maxa  = inputa[0], maxb = inputb[0];
    for (int z = 0;z < limit; z++) {
        if (maxa < inputa[z]) {
            maxa = inputa[z];
        }
    }
    for(int z = 0; z < limitb; z++) {
        if (maxb < inputb[z]) {
            maxb = inputb[z];
        }
    } for (int i = 0; i < limit; i++) {
        suma += inputa[i];
    } for(int i = 0; i < limitb; i++) {
        sumb += inputb[i];
    }
    sum = sumb + suma;
    printf("1st group has the highest number of %.2f their sum total of %.2f\n\n", maxa, suma);
    printf("2nd group has the highest number of %.2f their sum total of %.2f\n\n", maxb, sumb);
    printf("Their total sum is: %.2f\n", sum);

    return 0;
}
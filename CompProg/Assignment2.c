#include <stdio.h>
//accept two different arrays and calculate its sum
int main () {
    int a, limit = 0, b = 0;
    printf("Instructions \n(Enter two groups of number to be added together individually)\n\n");
    printf("How many numbers would you like to enter for the two groups of numbers: \n");
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
    b = a;
    float inputa[limit];
    for (int x = 0; x < limit; x++, a--) {
        printf("1st Group: Enter a number (%d more): \n", a);
        while (scanf("%f", &inputa[x]) != 1) {
            printf("Error! Enter a valid number: \n");
            while (getchar() != '\n');
        }
    }

    float inputb[limit];
    for (int y = 0; y < limit; y++, b--) {
        printf("2nd Group: Enter a number (%d more): \n", b);
        while (scanf("%f", &inputb[y]) != 1) {
            printf("Error! Enter a valid number: \n");
            while (getchar() != '\n');
        }
    }

    float totalsum = 0, suma = 0, sumb = 0, sum[limit], maxa  = inputa[0], maxb = inputb[0];
    for (int i = 0;i < limit; i++) {
        if (maxa < inputa[i]) {
            maxa = inputa[i];
        }
        if (maxb < inputb[i]) {
            maxb = inputb[i];
        }
        suma += inputa[i];
        sumb += inputb[i];
        sum[i] = inputa[i] + inputb[i];
        printf("%.2f + %.2f = %.2f\n", inputa[i], inputb[i], sum[i]);
    }
    totalsum = sumb + suma;
    printf("Their total sum is: %.2f\n\n", totalsum);
    printf("1st group has the highest number of %.2f their sum total of %.2f\n\n", maxa, suma);
    printf("2nd group has the highest number of %.2f their sum total of %.2f\n", maxb, sumb);

    return 0;
}
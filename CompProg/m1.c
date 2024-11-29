#include <stdio.h>
//find highest / lowest number out of all inputs
int main () {
    int a, limit = 0;
    printf("How many numbers would you like to enter: \n");
    scanf("%d", &a);
    limit = a;
    float input[limit];
    for(int x = 0; x < limit; x++, a--) {
        printf ("Enter Number (%d more): \n", a);
        scanf("%f", &input[x]);
    }
    int y = 0, z = 1;
    while (z < limit) {
        if (input[y] > input[z]) {
            z++;
        } else {
            y = z;
            z++;
        }
    }
    float max = input[y];
    int c = 0, d = 1;
    while (d < limit) {
        if (input[c] < input[d]) {
            d++;
        } else {
            c = d;
            d++;
        }
    }
    float min = input[c];
    printf("The largest number is %.2f\n The lowest number is %.2f\n", max, min);

    return 0;
}


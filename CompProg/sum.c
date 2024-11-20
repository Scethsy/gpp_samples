#include <stdio.h>
//find largest number of all wanted number of input and add them
int main () {
    int a, limit = 0;
    printf("How many numbers would you like to enter: \n");
    scanf("%d", &a);
    limit = a;
    float input[limit];
    for(int x = 0; x < limit; x++, a--) {
        printf ("Enter Number (%d more): \n", a);
        while (1) {
        // Attempt to read the input
        if (scanf("%f", &input[x]) != 1) {
            // Clear the input buffer on invalid input
            printf("Error: enter a number: \n");
            while (getchar() != '\n'); // Clear invalid input
            continue; // Restart the loop
        } else {
            break; // Exit the loop if valid input is received
        }
    }
    }
    int y = 0, z = 1, i = 0;
    while (z < limit) {
        if (input[y] > input[z]) {
            z++;
        } else {
            y = z;
            z++;
        }
    }
    //Sum
    float sum = 0;
    while (i <= limit) {
        sum += input[i];
        i++;
    }
    printf("The largest number is %.2f\n", input[y]);
    printf("Their sum is: %.2f\n", sum);

    return 0;
}
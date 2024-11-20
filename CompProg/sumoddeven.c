#include <stdio.h>
#include <math.h>
//find largest number of all wanted number of input and add them according to odd and even
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
    float sumo = 0, sume = 0, sum = 0;
    while (i <= limit) {
        if (fmod(input[i], 2)!= 0) {
           sumo += input[i];
        } else if (fmod(input[i], 2) == 0) {
            sume += input [i];
        }
        i++;
    }
    sum = sume + sumo;
    printf("The largest number is %.2f\n", input[y]);
    printf("Their sum of all odd number is: %.2f\n", sumo);
    printf("Their sum of all even number is: %.2f\n", sume);
    printf ("Total sum is: %.2f\n", sum);
    return 0;
}
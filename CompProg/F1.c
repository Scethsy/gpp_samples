#include <stdio.h>

int main () {
    float x;
    printf("Instructions \n (Enter a number to be determined if its a positive, negative or zero.)\n\n");
    printf("Enter a number: \n");
    while (scanf("%f", &x)!= 1) {
        printf("Error! Please Enter a valid value of number: \n");
        while (getchar() != '\n');
    }
    if (x > 0) {
        printf("%.2f is a Positive Number.\n", x);
    } else if (x < 0) {
        printf("%.2f is a Negative Number.\n", x);
    } else {
        printf("%.2f is a Zero.\n", x);
    }
    
    return 0;
}
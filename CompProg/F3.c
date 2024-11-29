#include <stdio.h>
void Input_Validation (int *x) {
    while (scanf("%d", x)!= 1 || *x < 0 || *x > 100) {
        printf("Error! Please Enter a valid value of grade: \n");
        while (getchar() != '\n');
    }
}

void Grade_Calculation (int x) {
    if (x > 96) {
        printf("A, Passing Grade.\n");
    } else if (x > 92) {
        printf("A-, Passing Grade.\n");
    } else if (x > 88) {
        printf("B+, Passing Grade.\n");
    } else if (x > 84) {
        printf("B, Passing Grade.\n");
    } else if (x > 79) {
        printf("B-, Passing Grade.\n");
    } else if (x > 74) {
        printf("C+, Passing Grade.\n");
    } else if (x > 69) {
        printf("C, Passing Grade.\n");    
    } else if (x > 64) {
        printf("C-, Passing Grade.\n");
    } else {
        printf("F, Failing Grade, Please Consult with Class Advisor\n");
    }
}

int main () {
    int x;
    printf("Instructions \n (Enter a number to determine its equivalent grade.)\n\n");
    printf("Enter a number: \n");
    
    Input_Validation (&x);

    Grade_Calculation(x);
    
    return 0;
}
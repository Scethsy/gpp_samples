#include <stdio.h>
#include <math.h>
int quadraticf(float a,float b,float c, float *x1,float  *x2) {
    float d = b*b - 4*a*c;
    if (d < 0) {
        printf("value of X is an imaginary number.\n");
        return 0;
    }
    *x1 = (-b + sqrt(d))/2/a;
    *x2 = (-b - sqrt(d))/2/a;
    return 1;
}

int main () {
    float input[3], x1 = 0, x2 = 0;
    char const* c[] = {"a", "b", "c"};
    printf("Instructions \n (Enter the values of a quadratic equation to solve for x using quadratic equation.)\n\n");
    for (int i = 0; i < 3; i++) {
        printf("(ax^2 + bx + c = 0)\n Enter the value of %s in the equation above:\n", c[i]);
        while(scanf("%f",&input[i])!= 1) {
            printf("Error! Enter a valid value of %s:\n", c[i]);
            while (getchar() != '\n');
        }
    }
    quadraticf(input[0], input[1], input[2], &x1, &x2);
    if (x1 != x2) {
        printf("X = %.2f ; X = %.2f\n", x1, x2);
    } else if ((input[1]*input[1]- 4*input[0]*input[2]) < 0) {
        printf("X = imaginary\n");
    } else {
        printf("X = %.2f\n", x1);
    }
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float input[2], x = 0;
    const char* number[] = {"first", "second"};
    int controller = 0;
    char op;

    // Input loop to collect two numbers
    while (controller < 2) {
        printf("Enter your %s number: \n", number[controller]);
        if (scanf("%f", &input[controller]) == 1) {
            controller++;
        } else {
            printf("Invalid Input! Enter a valid %s number input.\n", number[controller]);
            // Clear the input buffer
            while (getchar() != '\n');
        }
    }

    // Get the operator
    float n1 = input[0], n2 = input[1];
    printf("Enter the operator (+, -, *, %%): \n");
    while (1) {
        scanf(" %c", &op); // Space before %c to skip any leading whitespace
        if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
            break;
        } else {
            printf("Invalid Input! Enter a valid operator (+, -, *, /): \n");
            // Clear the input buffer
            while (getchar() != '\n');
        }
    }

    // Perform the operation based on the operator
    switch (op) {
        case '+': 
            x = n1 + n2;
            printf("The result of the operation is: %.2f\n", x);
            break;
        case '-': 
            x = n1 - n2;
            printf("The result of the operation is: %.2f\n", x);
            break;
        case '*': 
            x = n1 * n2;
            printf("The result of the operation is: %.2f\n", x);
            break;
        case '/': 
            if (n2 != 0) {
                x = n1 / n2;
                printf("The result of the operation is: %.2f\n", x);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            x = fmod(n1, n2);
            printf("The result of the operation is: %.2f\n", x);
    }

    return 0;
}


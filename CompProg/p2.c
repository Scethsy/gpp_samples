#include <stdio.h>
#include <math.h>

int main() {
    float sides[3], s, A;
    const char* sequence[] = {"first", "second", "third"};
    int x = 0;

    while (x < 3) {
        printf("Enter %s side: \n", sequence[x]);
        
        if (scanf("%f", &sides[x]) == 1) {
            x++;
        } else {
            printf("Error! enter a valid value\n");
            while (getchar() != '\n');
        }
    }
    //calculations formula
    float s1 = sides[0], s2 = sides[1], s3 = sides[2];
    
    s = (s1 + s2 + s3) / 2;
    A = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    printf("The value of s is: %.2f\n\n", s);
    printf("The area of the triangle is: %.2f\n", A);

    return 0;
}






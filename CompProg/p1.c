#include <stdio.h>

int main() {
    float php, euro, usd, yuan, kor, kro, sheq, dnr;

    printf("Enter Philippine peso: \n");
    while (scanf("%f", &php) != 1 || php < 0) {
        printf("Error: enter a valid value of Php.\n");
        while (getchar() != '\n');
        printf("Please enter a positive value of Php: \n");
    }
    //Currencies
    usd = php / 43.33089;
    euro = usd * 0.734719;
    yuan = usd * 6.346934;
    kor = usd * 18.77263;
    kro = usd * 5.449007;
    sheq = usd * 3.726334;
    dnr = usd * 0.274588;

    printf("The amount's equivalent to:\n\n");
    printf("US Dollar is: %.2f\n\n", usd);
    printf("Euro: %.2f\n\n", euro);
    printf("Yuan: %.2f\n\n", yuan);
    printf("Koruna: %.2f\n\n", kor);
    printf("Krone: %.2f\n\n", kro);
    printf("Sheqel: %.2f\n\n", sheq);
    printf("Dinar: %.2f\n\n", dnr);

    return 0;
}






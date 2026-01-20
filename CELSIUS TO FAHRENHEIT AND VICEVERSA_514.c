#include <stdio.h>

int main() {
    float C, F;
    float convF, convC;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    // Celsius to Fahrenheit
    convF = (C * 9.0 / 5.0) + 32.0;

    // Fahrenheit to Celsius
    convC = (F - 32.0) * 5.0 / 9.0;

    printf("\n--- RESULTS ---\n");
    printf("Celsius %.2f = Fahrenheit %.2f\n", C, convF);
    printf("Fahrenheit %.2f = Celsius %.2f\n", F, convC);

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI, amount;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    amount = P * pow((1 + R / 100), T);
    CI = amount - P;

    printf("\n----- RESULTS -----\n");
    printf("Simple Interest  = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}


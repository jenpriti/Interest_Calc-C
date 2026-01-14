#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input values
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest formula
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Output results
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);

    return 0;
}

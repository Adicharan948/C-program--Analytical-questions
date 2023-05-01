#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, prod, quot;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the sum, difference, product, and quotient
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;

    // Print the results
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);
    printf("The difference between %.2f and %.2f is %.2f\n", num1, num2, diff);
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, prod);
    printf("The quotient of %.2f and %.2f is %.2f\n", num1, num2, quot);

    return 0;
}
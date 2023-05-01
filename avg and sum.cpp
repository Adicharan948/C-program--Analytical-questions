#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    avg = (float) sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
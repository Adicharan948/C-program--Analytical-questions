#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // calculate sum of array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // calculate average of array elements
    float avg = (float) sum / n;

    // print sum and average
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", avg);

    return 0;
}
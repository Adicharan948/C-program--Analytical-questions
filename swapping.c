#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap a and b using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
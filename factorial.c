#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // Using unsigned long long for large numbers

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i; // Multiplying the numbers
        }
        printf("Factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}
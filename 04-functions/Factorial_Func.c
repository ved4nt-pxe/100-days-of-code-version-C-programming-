#include <stdio.h>

int factorial(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);
    if (result == -1) {
        printf("Factorial is not defined for negative numbers\n");
    } else {
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}

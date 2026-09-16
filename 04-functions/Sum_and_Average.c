#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float averageArray(int arr[], int size) {
    return (float)sumArray(arr, size) / size;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", sumArray(arr, n));
    printf("Average = %.2f\n", averageArray(arr, n));

    return 0;
}

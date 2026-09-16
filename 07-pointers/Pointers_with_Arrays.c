#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d at address %p\n", i, *(ptr + i), (ptr + i));
    }

    printf("\nSame value accessed as ptr[0..%d]:\n", size - 1);
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    return 0;
}
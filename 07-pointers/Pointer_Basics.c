#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Address stored in ptr = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    *ptr = 100;
    printf("\nAfter *ptr = 100:\n");
    printf("Value of num = %d\n", num);

    return 0;
}
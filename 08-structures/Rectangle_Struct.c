#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

float area(struct Rectangle r) {
    return r.length * r.width;
}

float perimeter(struct Rectangle r) {
    return 2 * (r.length + r.width);
}

int main() {
    struct Rectangle rect;

    printf("Enter length: ");
    scanf("%f", &rect.length);
    printf("Enter width: ");
    scanf("%f", &rect.width);

    printf("Area = %.2f\n", area(rect));
    printf("Perimeter = %.2f\n", perimeter(rect));

    return 0;
}
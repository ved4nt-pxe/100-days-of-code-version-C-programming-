#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    int years;
};

int main() {
    struct Employee employees[3];

    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  Name: ");
        scanf(" %49[^\n]", employees[i].name);
        printf("  Salary: ");
        scanf("%f", &employees[i].salary);
        printf("  Years of experience: ");
        scanf("%d", &employees[i].years);
    }

    printf("\nEmployees with salary > 50000:\n");
    int found = 0;
    for (int i = 0; i < 3; i++) {
        if (employees[i].salary > 50000) {
            printf("  %s (%.2f)\n", employees[i].name, employees[i].salary);
            found = 1;
        }
    }
    if (!found) {
        printf("  None\n");
    }

    return 0;
}
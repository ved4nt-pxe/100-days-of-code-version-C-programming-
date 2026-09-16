#include<stdio.h>
// Calculation Operator Functions.
double Sum(double a, double b) {
    return a + b;
}

double Sub(double a, double b){
    return a - b;
}

double Mul(double a , double b){
    return a*b;

}

double Div(double a , double b){
    return a/b;

}

int main(void) {
    double a, b;
    char Op;

    printf("------------------------This is a Application to Calculate number------------------------\n\n");

    printf("Enter an equation (example: 10 + 20): ");
    if (scanf("%lf %c %lf", &a, &Op, &b) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (Op){

        case '+':
            printf("Result: %.2f\n",Sum(a, b));
            break;
        
        case '-':
            printf("Result: %.2f\n",Sub(a ,b ));
            break;

        case '*':
            printf("Result: %.2f\n",Mul(a ,b ));
            break;

        case '/':
            if ( b != 0 ){
                printf("Result: %.2f\n",Div(a ,b ));
            }else {
                printf("Invalid value entered.");
            }
            break;

        default:
            printf("Unsupported operator: %c\n", Op);
            return 1;
    }
}
#include <stdio.h>

int main() {

    float a, b;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    switch (op) {

        case '+':
            printf("%.2f + %.2f = %.2f", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", a, b, a * b);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f", a, b, a / b);
            break;
        default:
            printf("ERROR");

    }

}

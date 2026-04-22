#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/': 
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero error");
            break;
        default: printf("Invalid operator");
    }

    return 0;
}

/*
output
Enter expression (e.g. 53) : 6 * 6
Result = 36.00

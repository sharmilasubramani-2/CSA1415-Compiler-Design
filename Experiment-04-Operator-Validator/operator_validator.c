#include <stdio.h>

int main()
{
    char op;

    printf("Enter an operator: ");
    scanf("%c", &op);

    switch(op)
{
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
        printf("Valid Arithmetic Operator");
        break;

    default:
        printf("Invalid Operator");
}
    return 0;
}

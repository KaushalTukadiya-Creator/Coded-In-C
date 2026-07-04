#include <stdio.h>
int main() 
{
    char ch;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &ch);  

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    if (ch == '+') 
    {
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    } 
    else if (ch == '-') 
    {
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    } 
    else if (ch == '*') 
    {
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    } 
    else if (ch == '/') 
    {
        if (num2 != 0)
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
    } 
    else 
    {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

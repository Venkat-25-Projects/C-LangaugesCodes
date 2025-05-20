#include<stdio.h>
int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    
    printf("\nEnter an operator (+ - * /): ");
    scanf(" %c", &operator);  // Added a space before %c to prevent any leftover newline issues
    
    printf("Enter number 1: ");
    scanf("%lf", &num1);  // Corrected to use &num1
    
    printf("Enter number 2: ");
    scanf("%lf", &num2);  // Corrected to use &num2
    
    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %.2f\n", result);
            break;
        case '/':
            if(num2 != 0)  // Check for division by zero
            {
                result = num1 / num2;
                printf("\nResult: %.2f\n", result);
            }
            else
            {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("\n%c is not a valid operator\n", operator);  
    }
    
    return 0;  
}


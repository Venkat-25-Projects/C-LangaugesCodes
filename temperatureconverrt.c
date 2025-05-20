#include<stdio.h>
#include<ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf(" %c", &unit);  // Added space before %c to consume any leftover newline character

    unit = tolower(unit);  // Convert the input character to lowercase for easier comparison

    if(unit == 'c')
    {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Fahrenheit is: %.2f\n", temp);
    }
    else if(unit == 'f')
    {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("\nThe temperature in Celsius is: %.2f\n", temp);
    }
    else
    {
        printf("\n%c is not a valid unit of measurement\n", unit);
    }

    return 0;
}


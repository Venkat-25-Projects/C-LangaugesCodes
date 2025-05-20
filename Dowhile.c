#include <stdio.h>

void main()
{
    // While loop: checks a condition then executes a block of code if the condition is true
    // Do-while loop: always executes a block of code once, then checks a condition

    int number = 0;
    int sum = 0;

    do {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        
        if (number > 0) {
            sum += number;  // Add the number to sum if it is greater than 0
        }
    } while (number > 0);  // The loop continues as long as the number is positive

    printf("Sum: %d\n", sum);  // Print the sum of entered positive numbers

    return 0;
}


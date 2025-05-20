#include <stdio.h>

void main()
{
    // Nested loop: a loop inside another loop
    
    int rows, columns;
    char symbol;

    // Input number of rows and columns
    printf("\nEnter # of rows: ");
    scanf("%d", &rows);
    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    getchar();  // Consume the newline character from the previous input

    // Input the symbol to use
    printf("Enter symbol to use: ");
    scanf("%c", &symbol);

    int i, j;  // Declare variables outside the loop
    
    // Nested loops for printing the grid
    for (i = 1; i <= rows; i++) // Loop for rows
    {
        for (j = 1; j <= columns; j++) // Loop for columns
        {
            printf("%c ", symbol); // Print the symbol in the grid
        }
        printf("\n"); // Move to the next line after each row
    }
}


#include<stdio.h>
#include<string.h>

int main()
{
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];
    
    // Swap the strings
    strcpy(temp, x);     // temp now holds "water"
    strcpy(x, y);        // x now holds "lemonade"
    strcpy(y, temp);     // y now holds "water"
    
    // Output the result
    printf("x = %s\n", x); // Should print "lemonade"
    printf("y = %s\n", y); // Should print "water"
    
    return 0; // Proper return statement
} // Closing brace for the main function


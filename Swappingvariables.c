#include<stdio.h>
#include<string.h>

int main()
{
    char x = 'X';  // Add a semicolon here
    char y = 'Y';  // Add a semicolon here
    char temp;
    
    temp = x;
    x = y;
    y = temp;
    
    // The swap works correctly now
    printf("x = %c\n", x);
    printf("y = %c\n", y);
    
    return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
    //while loop repeats a section of code while some condition remains true
    //A while loop might not execute at all if the condition is false initially
    
    char name[25];
    
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // Remove the newline character
    
    while (strlen(name) == 0) // Check if the input is empty
    {
        printf("\n"); // Added missing semicolon
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);  
        name[strlen(name) - 1] = '\0'; // Remove the newline character
    }
    
    printf("Hello %s\n", name); // Greet the user
    
    return 0;
}


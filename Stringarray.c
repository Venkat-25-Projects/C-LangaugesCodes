#include<stdio.h>
#include<string.h>

int main()
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    int i;  // Declare the loop variable outside the for loop
    
    strcpy(cars[0], "Tesla");
    
    for(i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));  // Initialize random number generator with the current time
    
    int number1 = (rand() % 20) + 1;  // Correct function name is rand()
    int number2 = (rand() % 20) + 1;
    int number3 = (rand() % 20) + 1;
    
    printf("%d\n", number1);  // Print the first random number
    printf("%d\n", number2);  // Print the second random number
    printf("%d\n", number3);  // Print the third random number
    
    return 0;
}


#include<stdio.h>

int main()
{
    int i;  // Declare i outside the for loop
    
    // Print numbers from 1 to 10
    for (i = 10; i > 10; i-=3) {
        printf("%d\n", i);
    }    

    return 0;
}


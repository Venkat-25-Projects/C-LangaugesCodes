#include<stdio.h>

void main()
{
    // Declare variables outside the loop
    int i;

    // Using continue: skips the rest of the loop for i == 13
    printf("Using continue:\n");
    for(i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            continue;  // Skips the iteration when i == 13
        }
        printf("%d\n", i);
    }

    // Using break: exits the loop entirely when i == 13
    printf("\nUsing break:\n");
    for(i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            break;  // Exits the loop when i == 13
        }
        printf("%d\n", i);
    }
}
#include<stdio.h>

void main()
{
    // Declare variables outside the loop
    int i;

    // Using continue: skips the rest of the loop for i == 13
    printf("Using continue:\n");
    for(i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            continue;  // Skips the iteration when i == 13
        }
        printf("%d\n", i);
    }

    // Using break: exits the loop entirely when i == 13
    printf("\nUsing break:\n");
    for(i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            break;  // Exits the loop when i == 13
        }
        printf("%d\n", i);
    }
}


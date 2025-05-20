#include<stdio.h>
int main()
{
	//Logical operators = || (or) checks if at least one condition is true

    float temp = 25;
    if(temp <= 0 || temp >=30)
    {
        printf("The weather is good!\n");
    }
    else
    {
        printf("The weather is bad!\n");
    }
    
    return 0;
}


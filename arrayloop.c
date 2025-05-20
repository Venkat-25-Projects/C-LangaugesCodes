#include<stdio.h>

int main()
{
	//Array Loop Working
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};
    int i;  // Declare the loop variable outside the for loop
    
    for(i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)  // Use 'i' declared outside
    {
        printf("$%.2lf\n", prices[i]);
    }
    
    return 0;
}


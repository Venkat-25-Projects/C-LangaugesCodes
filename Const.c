#include<stdio.h>
int main()
{
	// constant = fixed value that cannot altered by the program during its execution
	
	// During the execution if we change something like the pi as a variable and assing a different value that will execute but 
	// if we use const key that will not change it be same as it is if we want to change the value during the execution it may cause error.
	// While we are using const key we must use the variable name with CAPITAL LETTERS other wise it will show errors.
	
	const float PI = 3.45567;
	
	printf("%f", PI);
	
	return 0;
}

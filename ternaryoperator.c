#include<stdio.h>
int findMax(int x, int y)
{
//	if(x > y)
//	{
//		return x;	
//	}
//	else
//	{
//		return y;
//	}

//Insted of if else state ment we use the ternary operator 
//The ternary operator in C is a shorthand for an if-else statement. It is used to evaluate 
//     a condition and return one of two values based on whether the condition is true or false.


	return(x > y) ? x : y;
}



int main()
{
	//Ternary Operator = Shortcut to if/else when assigning/returning a value
	//    (condition) ? value if true : value is false 
	
	int max = findMax(3,4); 
	
	printf("%d", max);
	return 0;
}

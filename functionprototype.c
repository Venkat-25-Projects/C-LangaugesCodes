#include<stdio.h>

void hello(char[], int);	//Function Proto type

int main()
{
	//function prototype
	//What is it?
	//Function declaration, w/o a body, before main()
	//Ensure that calls to a function are made with the correct arguments
	//IMPORTANT NOTES 
	//Many C aruguments result in unexpected behaviour
	//A Function Prototype causes the compiler to flag an error if arguments are missing
	//A function prototype causes the compiler to flag an error if arguments are missings
	//ADVANTAGES 
	//1, Easier to navigate a program w/ main()at the top
	//2, Helps with Debugging
	//3, Commonly Used in Header Files.
	
	char name[] = "Venkat";
	int age  = 20;
	hello(name, age);
	return 0;
}
void hello(char name[], int age)
{

	printf("\nHello %s", name);
	printf("\nYou are %d years old", age);	
}

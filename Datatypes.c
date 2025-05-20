#include<stdio.h>
int main()
{
	// Variabls in c language which are used to allocate some memory to store the value in the memory.
	
	
	//int num1;  	 //To Crete a variable in c- language first we need to declare a variable like num1 after that. This is called Declaration
	//num1 = 10;	// After Creating the variable we need to store the value in that variable. This is Initialization
	//int y = 20   //This Is Both the Declaration + Initialization of the variable in c-language
	
	
	int age = 20;						// Integer Type
	float cgpa = 68.0;					// Floating Point
	char grade = 'C';					// Single character
	char name[] = "Sai";				//Double Character
	printf("Hello %s\n",name);
	printf("you are %d years old",age);
	printf("your average grade is %c\n",grade);
	printf("Your gpa is %f\n",cgpa);
	
}

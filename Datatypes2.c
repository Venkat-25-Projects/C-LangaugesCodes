#include<stdio.h>
int main()
{
	//Formate specifiers % =  Defines the formate a type of data to be displayed
	
	// %c = character 
	// %s = string (array of character)
	// %f = float
	// %lf = doublr
	// %d = integer
	
	//%.1 = Decimal Precision
	//%1 = minimum field width
	// %- = left align
	
	float item1 = 5.75;
	float item2 = 10.00;
	float item3 = 100.99;
	
	printf("Item 1: $%6.2f\n", item1);
	printf("Item 2: $%6.2f\n", item2);
	printf("Item 3: $%2f\n", item3);
	
	return 0; 
	
}

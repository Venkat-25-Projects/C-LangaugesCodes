#include<stdio.h>
#include<string.h>

int main()
{
	char name[25];
	int age;
	
	printf("\nwhats youre name?");
	//scanf("%s", &name);
	fgets(name, 25, stdin);		//Stdin means standard input	//instead of scanf we can use the fgets to get the output of the value.
	name[strlen(name)-1] = '\0';
	
	
	printf("Hello this is your age?");	//Printf() is used to display something as output.
	scanf("%d", &age);					//scanf is used to read the input.
	
	printf("\nHello %s, How are you", name);
	printf("\nYou are %d years old", age);
	return 0;
	
	
	
	
}

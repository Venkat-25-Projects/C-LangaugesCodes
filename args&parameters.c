#include<stdio.h>
void birthday(char name[], int age)
{
	printf("\nHappy Birthday dear %sX!", name);
	printf("\nYou are %d Years Old!", age);
	
}
int main()
{
	char name[] = "Bro";
	int age = 21;
	birthday(name, age); // >These are the arguments which are passes when we invoke them into the birthday function();  
	
	return 0;
}

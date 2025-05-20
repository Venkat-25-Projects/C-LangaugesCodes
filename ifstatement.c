#include<stdio.h>
int main()
{
	int age;
	
	printf("\n Enter your age: ");
	scanf("%d", &age);
	
	if (age >= 18)
	{
		printf("you are now signed up!");
	}
	else if(age ==0)
	{
		printf("you cant sign up you are just born");	
	}
	else if(age < 0)
	{
		printf("you are not eligible to sign up!");
	}
	else
	{
		printf("You are to young sign in!");
	}

}

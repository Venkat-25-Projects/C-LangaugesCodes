#include<stdio.h>
int main()
{
	//Finding the radius of the circle
	//Finding area of the circle
	
	const double PI = 3.141456;
	double radius;
	double circumference;
	//double area;
	
	printf("\nEnter the radius of the circle: ");
	scanf("%lf", &radius);
	
	circumference = 2 * PI * radius;
	//area = PI * radius * radius;
	
	printf("\ncircumference: %lf", circumference);
	//printf("\narea: %lf",area);
	
	return 0;
}

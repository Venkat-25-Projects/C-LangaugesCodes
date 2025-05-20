#include<stdio.h>
double square(double x)
{
	return x * x;

}

//Return state Type
//The return statement is sd to exit from a function amd optionally return a value to the calling function
//           The syntax depends on whaether the funcion is a void function (which does not return a value )
//			 or a function that returns a specify type of value (like: int, float etc).


int main()
{
	double x =square(3.14);
	printf("%lf",x);
	
	
	return 0;
}

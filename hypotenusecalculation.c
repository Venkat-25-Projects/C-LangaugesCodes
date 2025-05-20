#include<stdio.h>
#include<math.h>
int main()
{
	//Hypotenuse calculator
		double A;
		double B;
		double C;
		
		printf("Enter side A: ");
		scanf("%f", &A);
		
		printf("Enter side B: ");
		scanf("%f", &B);
		
		C = sqrt(A*A + B*B);
		
		printf("Side C: %lf",C);
		
		
	return 0;
}

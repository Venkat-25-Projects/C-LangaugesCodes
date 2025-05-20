#include<stdio.h>
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
int main()
{
	enum Day today = Sat;
	printf("%d", today);
	
	if(today == 1 || today == 7)
	{
		printf("\nIts's the weekend party time!");
	}
	else
	{
		printf("\n Have to work today :(");	
	}
	return 0;
}

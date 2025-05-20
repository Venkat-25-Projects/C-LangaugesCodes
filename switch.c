#include<stdio.h>
int main()
{
	//Switch Case Statement
	//Break Key word which helps us to break the case after getting the output but if we
	// remove that key word all the cases will be executed without break.
	
	
    char grade;
    
    printf("\n Enter a letter grade: ");
    scanf("%c", &grade);  // Corrected this line
    
    switch(grade)
    {
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("you did good!\n");
            break;
        case 'C':
            printf("You Did Okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU Failed!\n");
            break;
        default:
            printf("Enter a valid letter grade!\n");
    }
    return 0;
}


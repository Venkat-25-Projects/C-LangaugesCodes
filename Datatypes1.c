#include<stdio.h>
#include<stdbool.h>  // Include the header for bool type

int main()
{
    char a = 'c';						//Single Character   %c
    char b[] = "Hello";					//Array Character 	%s
    
    float c = 3.45467;				//4 Bytes (32 bit precision) 6-7 digits %f
    double d = 9.44664647474;		//8 Bytes (64 bit precision) 15-16 digits %lf
    
    bool e = true;					//1 byte (True or False)  %d
    
    
    char f = 100;					//1 byte (-128 to +127) %d or %c
    unsigned char g = 255;			//1 byte (0 to +255) %d or %c
    
    short int h = 45678;			//2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 23456;   //2 bytes (0 to +65,535)  %d
    
    
    int j = 2147483647;				//4 bytes(-2,147,483,648 to + 2,147,483,647) %d
    unsigned int k = 4294967295U;	//4 bytes (0 to +4,294,967,295) %u  (Use 'U' for unsigned literal)
    
    long long int l = 9876543298765432987654;  //8 bytes (-9 quintillion to  +9 quintillion) %lld
    unsigned long long int m = 9876543298765432987654U; //8 bytes (0 to +18 quintillion) %llu
    
    printf("%c\n", a);  //char
    printf("%s\n", b);  // character array
    printf("%f\n", c);	// float
    printf("%lf\n", d);	//double
    printf("%d\n", e);	//bool
    printf("%d\n", f);	//char as numeric value
    printf("%d\n", g);  //un signed char as numeric value
    printf("%d\n", h);	//short
    printf("%d\n", i);	// unsigned short
    printf("%d\n", j);	//int
    printf("%u\n", k);	//unsigned int
    printf("%lld\n", l);//long long int
    printf("%llu\n", m);//unsigned long long int  (correct format specifier for unsigned long long)
    
    return 0;
}


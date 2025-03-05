/* 
   11. Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)
_*/

#include<stdio.h>
int main()
{
	printf("____________________________________________________________________________________\n");

	printf("Data Type\t\tsize\t\tFormat Specifier\t\tRange\n");

	
	printf("____________________________________________________________________________________\n");



	printf("char\t\t\t1\t\t%%c\t\t-128 to +127\n");
	printf("unsigned char\t\t1\t\t%%c\t\t0 to 255\n");
	printf("short int\t\t2\t\t%%hd\t\t-32768 to +32767\n");
	printf("unsigned short int\t2\t\t%%hu\t\t0 to 65535\n");
	printf("int\t\t\t2\t\t%%d\t\t-32768 to +32767\n");
	printf("unsigned int\t\t2\t\t%%u\t\t0 to 65535\n");
	printf("long int\t\t4\t\t%%ld\t\t-2,147,483,648 to 2,147,483,647\n");
	printf("unsigned long int \t4\t\t%%lu\t\t0 to 4,294,967,295\n");
	return 0;
}

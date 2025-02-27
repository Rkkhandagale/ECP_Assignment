/*2.Write a program to accept a number and print the number in character, decimal, octal and hex
formats.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("\nvalue in character: %c",n);
	printf("\nvalue in decimal: %d",n);
	printf("\nvalue in octal: %o",n);
	printf("\nvalue in hex: %X",n);
	return 0;
}

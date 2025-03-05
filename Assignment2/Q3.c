//Rushikesh Khandagale
// Title 3. Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n>0)
		printf("%d is Positive number\n",n);
	else if(n<0)
		printf("%d is Negative number\n",n);
	else
		printf("You entered 0");
	return 0;

}

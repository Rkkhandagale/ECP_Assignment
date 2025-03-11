//1. Write a function to calculate factorial of a given number

#include<stdio.h>

int fact(int);

int main()
{
	int num,f;
	printf("Enter the number\n");
	scanf("%d",&num);
	f=fact(num);
	printf("Factorial of %d=%d\n",num,f);

	return 0;

}

int fact(int i)
{
	int f=1;
	for(int j=1;j<=i;j++)
	{
		f=f*j;
	}
	return f;
}

//7. Write a function to print given number of terms of Fibonacci series.

#include<stdio.h>
void fib(int);
int main()
{
	int n;
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	fib(n);
	printf("\n");
	return 0;
}
void fib(int n)
{
	int n1=0,n2=1,temp=1;
	printf("%d %d ",n1,n2);
	for(int i=1;i<=n-2;i++)
	{
		temp=n1+n2;
		n1=n2;
		n2=temp;
		printf("%d ",temp);
	}
	return ;
}

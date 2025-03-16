//8. Write a function to return next term of Fibonacci series with each call to the function.
#include<stdio.h>
int fib(int*,int*);
int n,n1=0,n2=1,fibn,temp=1;
int main()
{
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	printf("%d %d ",n1,n2);
	for(int j=1;j<=n-2;j++)
	{
		fibn=fib(&n1,&n2);
		printf("%d ",fibn);
	}
	return 0;
}
int fib(int* pn1,int* pn2)
{
		temp=*pn1+*pn2;
		*pn1=*pn2;
		*pn2=temp;
		return temp;
}

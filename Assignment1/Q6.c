//6. Write a program to accept an integer value and print its table.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int i=1;
	while(i<=10)
	{
		printf("%d*%d=%d\n",i,n,i*n);
		i++;
	}
	return 0;
}

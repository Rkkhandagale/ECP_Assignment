//2. Input a number and display whether number is Even or Odd.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is an EVEN number\n",n);
	}
	else
		printf("%d is an ODD number ",n);
	return 0;
}

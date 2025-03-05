//Rushikesh Khandagale
/* Title 5. Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.*/


#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);

	if(n2>n1)
	{
		if(n2>n3)
			printf("%d is Greater\n",n2);

		else
			printf("%d is greater\n",n3);
	}
	else if(n1>n2)
	{
		if(n1>n3)
			printf("%d is greater\n",n1);
		else
			printf("%d is greater\n",n3);
	}
	return 0;


























	return 0;
}

//Rushikesh Khandagale
/* Title 5. Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.*/


#include<stdio.h>
int main()
{
	int n1,n2,n3,max;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	printf("%d is Maximum number \n",max);
	return 0;


























	return 0;
}

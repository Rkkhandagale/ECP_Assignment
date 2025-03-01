//8. Write a program to accept three integer numbers and find its average.

#include<stdio.h>
int main()
{
	int n1,n2,n3,avg;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	avg=(n1+n2+n3)/3;
	printf("Average is =%d\n",avg);
	return 0;

}

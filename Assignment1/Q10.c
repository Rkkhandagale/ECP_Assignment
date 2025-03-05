/*
   10. Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + ca + b+ c
Area = sqrt(s*(s-a)*(s-b)*(s-c))
s=((a+b+c)/2)
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int peri,area,a,b,c,s;
	printf("Enter a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	peri=a+b+c;
	s=peri/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is= %d and perimeter is=%d\n",area,peri);
	return 0;
}

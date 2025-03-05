//Rushikesh Khandagale
/* Title 7. Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator */


#include<stdio.h>
int main()
{
	//a
	int y;
	printf("Enter the year\n");
	scanf("%d",&y);
	if(y%100!=0)
	{
		if(y%4==0)
			printf("%d is a leap year\n",y);
		else
			printf("%d is not a leap yaer\n",y);
	}
	else if(y%400==0)
		printf("%d is a leap Year\n",y);
	else
		printf("%d is not a leap year\n",y);

	//b
	if(((y%100!=0)&&(y%4==0))||(y%400==0))
		printf("%d is a leap year\n",y);
	else
		printf("It is not an leap year\n");

	//c
	(((y%100!=0)&&(y%4==0))||(y%400==0))?printf("%d is a leap year\n",y):printf("%d is not a leap year\n",y);



	return 0;
}

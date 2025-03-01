/* 7. Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9361
b. 9361 = 9000 + 300 + 60 + 9
c. 1639   */

#include<stdio.h>
int main()
{
	int n,orig;
	printf("Enter 4 digit number \n");
	scanf("%d",&n);
	orig=n;
	int d1,d2,d3,d4;
	d1=n%10;//d1=1
	n=n/10;//n=936
	d2=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d4=n%10;

	printf("Face values are %d	%d	%d	%d\n",d4,d3,d2,d1);
	printf("Place values are %d	%d	%d	%d\n",d4*1000,d3*100,d2*10,d1);
	printf("Reverse number is %d%d%d%d\n",d1,d2,d3,d4);

	return 0;


}


//Rushikesh Khandagale
/* Title 6. Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/


#include<stdio.h>
int main()
{
	int pal=0,num,orig,i=1,n;
	printf("Enter 5 digit number\n");
	scanf("%d",&num);
	orig=num;
	while(i<=5)
	{
		n=num%10;
		num=num/10;
		pal=pal*10+n;
		i++;

	}
	if(pal==orig)
		printf("It is an Palindrom %d=%d",pal,orig);
	else
		printf("It is not an palindrom %d!=%d",pal,orig);
	return 0;
}

//Rushikesh Khandagale
/* Title 4. Write a program to find maximum of two numbers using
a. If – else
b. conditional operator. */


#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter two numbers\n");
scanf("%d%d",&n1,&n2);
if(n1>n2)
	printf("%d is greater\n",n1);
else if(n2>n1)
	printf("%d is greater\n",n2);
else
	printf("you entered same number twise\n");


n1>n2?printf("%d is greater\n",n1):printf("%d is greater\n",n2);

return 0;
}

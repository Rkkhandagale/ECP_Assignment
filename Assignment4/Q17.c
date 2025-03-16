/* 7. Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables */

/*a:
#include<stdio.h>
int sum, pro;
void cal(int,int);
int main()
{
	int num1,num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	cal(num1,num2);
	printf("sum =%d\nproduct=%d",sum,pro);
	return 0;
}

void cal(int num1,int num2)
{
	sum=num1+num2;
	pro=num1*num2;
}  */

//b:
#include<stdio.h>
void cal(int,int,int*,int*);
int main()
{
	int num1,num2,sum,pro;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	cal(num1,num2,&sum,&pro);
	printf("sum =%d\nproduct=%d",sum,pro);
	return 0;

}

void cal(int n1,int n2,int*sum,int*product)
{
	*sum=n1+n2;
	*product=n1*n2;
}




































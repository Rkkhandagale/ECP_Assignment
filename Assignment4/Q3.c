/*3. Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/

#include<stdio.h>

int calculator(int , int, char, int *);

int main()
{
	int num1,num2,result, status;
	char opr;
	
	printf("Enter two operand and operator :  (op1 opr op2) : ");
	scanf("%d %c %d",&num1, &opr,&num2);

	status= calculator(num1 , num2, opr, &result);

	if(status)

}

/*3. Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/

#include<stdio.h>

int calculator(int , int, char);
int flag=1;
int main()
{
	int num1,num2,result;
	char opr;
	
	printf("Enter two operand and operator :  (op1 opr op2) : \n");
	scanf("%d %c %d",&num1, &opr,&num2);
	result=calculator(num1 , num2, opr);
	if(result!=0)
		printf("%d %c %d=%d\n",num1,opr,num2,result);
	else
		printf("Operation not done...\n");
	return 0;
}

int calculator(int n1, int n2, char ch)
{
	switch(ch)
	{
		case '+':
			return n1+n2;
			break;

		case '-':
			return n1-n2;
			break;

		case '*':
			return n1*n2;
			break;

		case '/':
			if(n2!=0)
			return n1/n2;
			else
				flag=0;
			return flag;
			break;

		default:
			printf("wrong operation entered\n");
			flag=0;
			return flag;
	}
}


















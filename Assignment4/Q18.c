//8. Write a function to swap two numbers.
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int num1, num2;
	printf("Enter two number\n");
	scanf("%d%d",&num1,&num2);
	printf("Before swap num1=%d and num2=%d\n",num1,num2);
	swap(&num1,&num2);
	printf("after swap num1=%d and num2=%d\n",num1,num2);
	return 0;
}

void swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}

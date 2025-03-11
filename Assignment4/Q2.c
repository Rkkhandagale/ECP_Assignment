//2. Write a function to calculate power.

#include<stdio.h>

int power(int base ,int index);

int main()
{
	int ba,in,pow;
	printf("Enter Base and index\n");
	scanf("%d%d",&ba,&in);
	pow=power(ba,in);
	printf("Power of %d^%d=%d\n",ba,in,pow);

	return 0;

}


int power(int base ,int index)
{
	int pow=1;
	for(int i=1;i<=index;i++)
	{
		pow=base*pow;
	}
	return pow;
}

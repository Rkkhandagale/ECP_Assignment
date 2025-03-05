/* 8. Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
piercent discount for quantities over 50.*/

#include<stdio.h>
int main()
{
	float qt,i=5,price;
	printf("Enter Quantity\n");
	scanf("%f",&qt);
	if(qt>50)
	{
		price=i*qt*0.85;
		printf("Total price with 15%% discount =%f\n",price);
	
	}
	else if(qt>30)
	{
		price=i*qt*0.9;
		printf("Total price with 10%% discount =%f\n",price);
	}
	else
	{
		price=i*qt;
		printf("Total price is = %f\n",price);
	}

	

return 0;

}


//9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa.
// Formula for  conversion is c=(5/9)*(f-32)

#include<stdio.h>
int main()
{
	float cel,fah;
	char option;
	printf("in which you want to convert temperature F Or C\n");
	scanf("%c",&option);
	
	if(option=='C')
	{
		printf("Enter your Fahrenheit temreture\n");
		scanf("%f",&fah);
		cel=(5/9)*(fah-32);
		printf("Temperature in Celcius is %f\n ",cel);
	}
	else if(option=='F')
	{

		printf("Enter your Celcius temreture\n");
		scanf("%f",&cel);
		fah=(1.8)*cel+32;
		printf("Temperature in Fahrenheit is %f\n ",fah);
	}
	return 0;
}

/*10. Write function to check whether given year is leap or not. Write another function to print
number of days in given month.*/

#include<stdio.h>
void leap(int);
void month_days(int);
int main()
{
	int y,month;
	printf("Enter the year\n");
	scanf("%d",&y);
	leap(y);

	printf("Enter month :\n");
	scanf("%d",&month);
	month_days(month);

	return 0;
}

void leap(int y)
{
	if(((y%100!=0)&&(y%4==0))||(y%400==0))
		printf("%d is a leap year\n",y);
	else
		printf("It is not an leap year\n");

}

void month_days(int month)
{
	if(month<=0 || month>=13)
		printf("Wrong input\n");
	else
	{
		switch(month)
		{
			case 1:
				printf("number of days in jan %d is 31\n",month);
				break;
			case 2:
				printf("number of days in feb %d is 28 or 29\n",month);
				break;
			case 3:
				printf("number of days in mar %d is 31\n",month);
				break;
			case 4:
				printf("number of days in apr %d is 30\n",month);
				break;
			case 5:
				printf("number of days in may %d is 31\n",month);
				break;
			case 6:
				printf("number of days in jun %d is 30\n",month);
				break;
			case 7:
				printf("number of days in jul %d is 31\n",month);
				break;
			case 8:
				printf("number of days in aug %d is 31\n",month);
				break;
			case 9:
				printf("number of days in sep %d is 30\n",month);
				break;
			case 10:
				printf("number of days in oct %d is 31\n",month);
				break;
			case 11:
				printf("number of days in nov %d is 31\n",month);
				break;
			case 12:
				printf("number of days in dec %d is 31\n",month);
				break;

		}
	}
}




















/*9. Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.*/

#include<stdio.h>
int num,start,end,pri,flag=1;
int check(int);
void range(int,int);
int main()
{
	printf("Enter number you want to check:\n");
	scanf("%d",&num);
	pri=check(num);
	if(pri!=0)
		printf("%d is a prime number:\n",num);
	else
		printf("%d is not a prime number:\n",num);

	printf("Give the range :\n");
	scanf("%d%d",&start,&end);
	range(start,end);
	return 0;

}

int check(int num)
{
	if(num<=1)
		flag=0;
	else if(num==2 || num==3)
		flag=1;
	else
	{
		for(int i=2;i<num;i++)
		{
		if(num%i==0)
			flag=0;
		}
	}
	return flag;
}


void range(int start,int end)
{
	int n1,n2,flag=1;
	for(int i=start;i<=end;i++)
	{
		flag=1;
		if(i<=1){
			n1=0;
		}else{
			for(int j=2;j<=i;j++)
			{
				if(i%j==0)
				{
					flag=0;
					break;
				}
			}
		}
		if(flag==1)
		{
			printf("%d ",i);
		}
		}
	printf("\n");
}




























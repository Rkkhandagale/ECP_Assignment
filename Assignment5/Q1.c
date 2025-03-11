//1. Write a program to accept marks of five subjects, calculate its total and average.

#include<stdio.h>
int main()
{
	int arr[5];
	int i,sub,total=0;
	float average;
	for(i=0;i<5;i++)
	{
		int j=1;
		printf("Enter subject %d marks=\n",j);
		scanf("%d",&sub);
		arr[i]=sub;
		total=total+sub;
		j++;
	}
	average=total/5;
	printf("Total Marks=%d\nAverage=%.2f\n",total,average);
	return 0;



}

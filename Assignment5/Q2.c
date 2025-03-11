/* 2. Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>
int create_arr(int size);
void show_arr(void);
int main()
{
	int size;
	int *ptr;
	printf("Enter size of the array:");
	scanf("%d",&size);
	int arr[size];
	create_arr(size);
	show_arr()





	return 0;
}


int create_arr(int size);
{
	int temp;
	printf("enter elements of an array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&temp);
		arr[i]=temp;
	}
	return 0;
}

void show_arr(void)
































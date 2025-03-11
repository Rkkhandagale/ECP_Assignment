#include<stdio.h>
#include<string.h>
int main(void)
{
	int num;

	//memset(&num, 0, sizeof(int));
	memset(&num, 'A', sizeof(int));

	printf("num = %c\n", num);

	int arr[5];

	memset(arr, '5', sizeof(arr));

	printf("arr :: ");
	for(int i = 0 ; i < 5 ; i++)
		printf(" %c",arr[i]);
	printf("\n");

	return 0;
}

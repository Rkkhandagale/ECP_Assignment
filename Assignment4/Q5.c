//5. Write a function to print a given character for a given number of times.

#include<stdio.h>
void print_chr(char,int);
int main()
{
	int i;
	char ch;
	printf("Enter character:\n");
	scanf("%c",&ch);
	printf("How many times you want to print:\n");
	scanf("%d",&i);
	print_chr(ch,i);

	return 0;

}

void print_chr(char ch,int n)
{
	for(int j=1;j<=n;j++)
	{
		printf("%c\t",ch);
	}
	return;
}

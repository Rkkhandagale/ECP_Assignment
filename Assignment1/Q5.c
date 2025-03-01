//5. Write a program to display ASCII values for character constants ‘\n’, ‘\r’, ‘\t’, ‘\a’, ‘\b’.
#include<stdio.h>
int main()
{
	char ch1,ch2,ch3,ch4,ch5,ch6;
	ch1='\n';
	ch2='\r';
	ch3='\t';
	ch4='\a';
	ch5='\b';

	printf("ASCII value of \\n is %d\n",ch1);
	printf("ASCII value of \\r is %d\n",ch2);
	printf("ASCII value of \\t is %d\n",ch3);
	printf("ASCII value of \\a is %d\n",ch4);
	printf("ASCII value of \\b is %d\n",ch5);
	return 0;

}

/* 3. Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value. */

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character : \n");
	scanf("%c",&ch);
	printf("ASCII value of %c is %d\n",ch,ch);
	printf("ASCII value of %c in hex is %X\n",ch,ch);
	printf("ASCII value of %c in octal is %o\n",ch,ch);

	int asc;
	printf("Now Enter ASCII value:\n");
	scanf("%d",&asc);
	printf("character for %d is %c\n",asc,asc);
	return 0;
}

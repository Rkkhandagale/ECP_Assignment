/*  1. Write a program to demonstrate use of string library functions.
a. strlen()
e. stricmp()
i. strncpy()
b. strcpy()
f. strrev()
j. strncat()
c. strcat()
g. strchr()
k. strncmp()
d. strcmp()
h. strstr()
l. strtok() */

#include<stdio.h>
#include<string.h>

int main()
{
	//strlen()
	char str[20];
	printf("Enter your string\n");
	scanf("%[^\n]s",&str);

	int len=strlen(str);
	printf("lenght=%d\n",len);

//	strcpy()
	char str1[20];
	char str2[20];
	printf("Enter your 1st string\n");
	scanf(" %[^\n]s",&str1);
	printf("Enter your string\n");
	scanf(" %[^\n]s",&str2);

	strcpy(str1,str2);
	printf("str2=%s\n",str2);

	//strcat()
	strcat(str1,str2);
	printf("after strcat(): str1=%s\t str2=%s\n",str1,str2);

	//strcmp()
	char str3[16], str4[16];

	printf("Enter 1st string\n");
	scanf(" %[^\n]s",str3);
	printf("Enter 2nd string\n");
	scanf("%*c%[^\n]s",str4);

	printf("str1=%s, str2=%s\n",str3,str4);

	int ret=strcmp(str3,str4);
	if(ret<0)
		printf("str1 is less than str2\n");
	else if(ret==0)
		printf("str1 is equal to str2\n");
	else
		printf("str1 is greater than str2");
	printf("ret=%d\n",ret);






	return 0;
}

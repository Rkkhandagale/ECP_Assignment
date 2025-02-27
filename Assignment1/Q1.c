/* 1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results. */

#include<stdio.h>
int main()
{
	int n1,n2, sum, diff,prod;
	printf("Enter two numbers :\n");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	diff=n1-n2;
	prod=n1*n2;
	printf("sum is %d\ndifference is %d \n product is %d\n",sum,diff,prod);
	

	unsigned int un1,un2, usum, udiff,uprod;
	printf("Enter two numbers :\n");
    scanf("%u%u",&un1,&un2);
    usum=un1+un2;
    udiff=un1-un2;
    uprod=un1*un2;
	printf("sum is %u\ndifference is %u \n product is %u\n",usum,udiff,uprod);


	long ln1,ln2, lsum, ldiff,lprod;
	printf("Enter two numbers :\n");
    scanf("%ld%ld",&ln1,&ln2);
    lsum=ln1+ln2;
    ldiff=ln1-ln2;
    lprod=ln1*ln2;
    printf("sum is %ld\ndifference is %ld \n product is %ld\n",lsum,ldiff,lprod);


	unsigned long uln1,uln2, ulsum, uldiff,ulprod;
	printf("Enter two numbers :\n");
    scanf("%lu%lu",&uln1,&uln2);
    ulsum=uln1+uln2;
    uldiff=uln1-uln2;
    ulprod=uln1*uln2;
    printf("sum is %lu\ndifference is %lu \n product is %lu\n",ulsum,uldiff,ulprod);

	char ch1,ch2,csum,cdiff,cprod;
	printf("Enter two characters : \n");
	scanf("%*c%c%c ",&ch1,&ch2);
	csum=ch1+ch2;
	cdiff=ch1-ch2;
	cprod=ch1*ch2;
	printf("sum is %c\ndifference is %c \n product is %c\n",csum,cdiff,cprod);


	return 0;

}

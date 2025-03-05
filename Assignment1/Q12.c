/* 
   12. Extend above program (11) to print ranges for float, double, and long double. Use <float.h>.
“float” numbers can be printed using %f, %g, %e, %E.
_*/

#include<stdio.h>
#include<float.h>
int main()
{
	printf("_________________________________________________________________________________________\n");

	printf("Data Type\t\tsize\t\tFormat Specifier\t\tRange\n");

	
	printf("_________________________________________________________________________________________\n");



	printf("char\t\t\t1\t\t%%c\t\t\t-128 to +127\n");
	printf("unsigned char\t\t1\t\t%%c\t\t\t0 to 255\n");
	printf("short int\t\t2\t\t%%hd\t\t\t-32768 to +32767\n");
	printf("unsigned short int\t2\t\t%%hu\t\t\t0 to 65535\n");
	printf("int\t\t\t2\t\t%%d\t\t\t-32768 to +32767\n");
	printf("unsigned int\t\t2\t\t%%u\t\t\t0 to 65535\n");
	printf("long int\t\t4\t\t%%ld\t\t\t-2,147,483,648 to 2,147,483,647\n");
	printf("float\t\t\t4\t\t%%f,%%g,%%e,%%E\t\t1.175494e-38 to 3.402823e+38\n");
	printf("double\t\t\t8\t\t%%lf\t\t\t2.225074e-308 to 1.797693e+308\n");
	printf("long double\t\t10\t\t%%lf\t\t\t3.362103e-4932 to 1.189731e+4932\n");
	


	return 0;
}

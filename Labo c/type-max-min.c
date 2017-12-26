#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	printf("Type, min, max, sizeof()\n");
	printf("int, %.0f, %.0f, %lu\n", pow(2,sizeof(int)*8-1)-1, -pow(2,sizeof(int)*8-1), sizeof(int));
	printf("unsigned int, %.0f, %i, %lu\n", pow(2,sizeof(unsigned int)*8)-1, 0, sizeof(unsigned int));

	printf("short, %.0f, %.0f, %lu\n", pow(2,sizeof(short)*8-1)-1, -pow(2,sizeof(short)*8-1), sizeof(short));
	printf("unsigned short, %.0f, %i, %lu\n", pow(2,sizeof(unsigned short)*8)-1, 0, sizeof(unsigned short));

	printf("long, %.0f, %.0f, %lu\n", pow(2,sizeof(long)*8-1)-1, -pow(2,sizeof(long)*8-1), sizeof(long));
	printf("unsigned long, %.0f, %i, %lu\n", pow(2,sizeof(unsigned long)*8)-1, 0, sizeof(unsigned long));

	printf("float, %.0f, %.0f, %lu\n", pow(2,sizeof(float)*8-1)-1, -pow(2,sizeof(float)*8-1), sizeof(float));
	printf("double, %.0f, %.0f, %lu\n", pow(2,sizeof(double)*8-1)-1, -pow(2,sizeof(double)*8-1), sizeof(double));

	printf("char, %.0f, %.0f, %lu\n", pow(2,sizeof(char)*8-1)-1, -pow(2,sizeof(char)*8-1), sizeof(char));
	printf("unsigned char, %.0f, %i, %lu\n", pow(2,sizeof(unsigned char)*8)-1, 0, sizeof(unsigned char));
	return EXIT_SUCCESS;
}
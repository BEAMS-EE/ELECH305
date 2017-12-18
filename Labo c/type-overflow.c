#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 2147483647;
	unsigned int b = 0;
	printf("a = %i, a+1 = %i\n", a, a+1);
	/* '%u' prints an unsigned int. */
	printf("b = %u, b-1 = %u\n", b, b-1);
	return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int foo = 0;

	(foo == 1) ? /* Do something */ printf("foo is 1\n") : (foo == 2) ? /* Do something else */ printf("foo is 2\n") : /* Do something? */ printf("foo is something else\n");
	return EXIT_SUCCESS;
}
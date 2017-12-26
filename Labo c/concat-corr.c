#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* foo = "foo";
	char* bar = "bar";
	char* baz;
	baz = malloc(strlen(foo) + strlen(bar));
	strcpy(baz, foo);
	strcat(baz, bar);
	printf("%s\n", baz);
	return EXIT_SUCCESS;
}
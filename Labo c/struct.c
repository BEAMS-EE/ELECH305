#include <stdio.h>
#include <stdlib.h>

typedef struct MyStruct MyStruct;

struct MyStruct{
	int a;
	int b;
};

int main()
{
	/* Direct instance */
	MyStruct foo;

	/* Content accessed using a '.' */
	foo.a = 1;
	foo.b = foo.a;

	/* Pointer instance */
	MyStruct * bar;

	/* Don't forget to allocate it some memory. */
	bar = malloc(sizeof(MyStruct));

	/* If using its address, content accessed using a '->' */
	bar->a = 2;

	/* If using its value, content accessed using a '.' */
	(*bar).b = 5;

	return EXIT_SUCCESS;
}
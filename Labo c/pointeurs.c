#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Create a variable containing 42.*/
	int foo = 42;

	/* &foo gives the address of the variable foo.*/
	printf("foo = %i, address: %p\n", foo, &foo);

	/* Create a pointer 'bar' pointing to the address of 'foo'.*/
	int * bar = &foo;

	/* Any subsequent invocation to '*bar' gives the value at the address
	pointed by 'bar'.*/
	printf("bar = %i, address: %p\n", *bar, bar);

	/* To create an "empty" pointer, we can allocate it some memory.*/
	int * baz = (int *)malloc(sizeof(int));
	/* 'baz' is now a pointer to a memory space of one 'int'.*/

	*baz = foo;
	/* *baz = 42 */

	*baz = *bar;
	/* *baz = *bar = 42 */

	baz = bar;
	/* baz and bar now point to the same address. */

	/* If we change the memory space pointed by 'bar': */
	*bar = 23;
	/* *baz will also change since it points to the same place.*/

	return EXIT_SUCCESS;
}
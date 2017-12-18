#include <stdio.h>
#include <stdlib.h>

int main()
{
	int foo = 0;

	while (foo < 10) {
		printf("While loop iteration: %i\n", foo);
		foo++;
	}

	/* In C, the variable used in the 'for' loop control has to be
	declared outside of the loop. */
	for (foo = 0; foo < 15; foo++) {
		/* Do something. */
		printf("For loop iteration: %i\n", foo);
	}

	do {
		/* First execution of the loop. */
		foo++;
		printf("Do while loop iteration: %i\n", foo);
	} while (foo < 10);

	return EXIT_SUCCESS;
}
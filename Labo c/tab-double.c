#include <stdlib.c>

int main()
{
	int i;
	int a,b;

	/* Static double entry tabular. */
	char tab[2][3];

	/* To create a dynamic two dimensions matrix, we need to
	initialize an array of pointers of pointers.
	That is, each element of the array will point to a pointer,
	which then points again to an array of variables. */
	char ** matrix = malloc(a*sizeof(char *));

	for(i=0; i<a; i++) {
		*(matrix+i) = malloc(b*sizeof(char));
	}
	return EXIT_SUCCESS;
}
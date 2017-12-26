#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	int mask = 0x80000000;
	printf("Entrez un nombre entier: ");
	scanf("%i", &n);

	for(i=0; i<sizeof(n)*8; i++) {
		printf("%i", ( ((n << i) & mask) == mask) ? 1 : 0);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
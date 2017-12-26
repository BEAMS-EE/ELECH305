#include <stdio.h>
#include <stdlib.h>

void fibbo(int * tab, int n, int i);

int main()
{
	int n = 30;
	int i;
	int * tab = malloc(n*sizeof(int));
	fibbo(tab, n, n-1);

	for(i=0; i<n; i++) {
		printf("%i ", tab[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}

void fibbo(int * tab, int n, int i)
{
	if(i == 0) {
		tab[i] = 0;
	}
	else if(i == 1) {
		tab[i] = 1;
		fibbo(tab, n, i-1);
	}
	else if(i > 1 && i < n) {
		fibbo(tab, n, i-1);
		fibbo(tab, n, i-2);
		tab[i] = tab[i-1] + tab[i-2];
	}
}
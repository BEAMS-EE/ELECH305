#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void doublestr(char* str)
{
	str = realloc(str, strlen(str)*2*sizeof(char));
	strcat(str, str);
}

int main()
{
	// char * s = "coucou";
	char * s = malloc(strlen("coucou")*sizeof(char));
	strcpy(s, "coucou");
	doublestr(s);
	printf("%s\n", s);
	return EXIT_SUCCESS;
}
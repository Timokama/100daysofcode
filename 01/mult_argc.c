#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i, result = 1;
	for (i = 1; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		result *= strtol(argv[i], NULL, 10);
	}
	printf("Multiplication result is %d\n", result);
	return (0);
}

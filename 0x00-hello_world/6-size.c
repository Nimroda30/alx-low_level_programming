#include <stdio.h>

/**
 *main -is the entry point for the program.
 *Return:zero if no error, Non-zero value  if errors.
 *
 */

int main(void)

{
	printf("char size: %ld byte(s)\n", sizeof(char));
	printf("int size: %ld byte(s)\n", sizeof(int));
	printf("long int size: %ld byte(s)\n", sizeof(long int));
	printf("long long int size: %ld byte(s)\n", sizeof(long long int));
	printf("float size: %ld byte(s)\n", sizeof(float));
return (0);
}

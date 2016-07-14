#include <stdio.h>

int main(void)
{
	enum Liquid { OUNCE = 1, CUP = 8, PINT = 16, QUART = 32, GALLON = 128, LETER };
	enum Liquid jar;

	jar = QUART;
	printf("%u\n", jar);
	jar = jar + PINT;
	printf("%u\n", jar);
	jar = LETER;
    printf("%u\n", jar);



	return 0;
}
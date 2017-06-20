#include <stdio.h>

void A(void)
{
	printf("A\r\n");
}

void b(void)

{
	printf ("B\r\n");
}

int main(void)
{
	printf("Hello, World!\r\n");

	A();

	b();

	return 0;
}


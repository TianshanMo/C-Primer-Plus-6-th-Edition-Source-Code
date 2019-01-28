/* swap3.c -- using pointers to make swapping work */
#include <stdio.h>
void interchange(int * u, int * v);

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);	// send addresses to function
	printf("Now x = %d and y = %d", x, y);

	return 0;
}

void interchange(int * u, int * v)
{
	int temp;

	temp = *u;
	*u = *v;
	*v = temp;
}
/* longstrg.c -- printing long strings */
#include <stdio.h>
int main(void)
{
	printf("Here's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
ong string.\n");
	printf("Here's another way to print a "
		"long string.\n");		/* ANSI C */

	return 0;
}
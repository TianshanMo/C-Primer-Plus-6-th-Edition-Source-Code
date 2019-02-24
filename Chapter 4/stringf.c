/* stringf.c -- formatting */
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n\n\n", BLURB);

	char name[40];
	float cash;
	scanf("%s%f", &name, &cash);
	printf("The %s family just may be $%.2f richer!\n", name, cash);

	return 0;
}
/* do_while.c -- next condition loop */
#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia thearpy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations! You are cured!\n");

	return 0;
}
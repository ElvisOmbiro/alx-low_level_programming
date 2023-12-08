#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  prints passwords for the crackme5 executable.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), r, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = codex[tmp];

	tmp = 0;
	for (r = 0; r < len; r++)
		tmp += argv[1][r];
	password[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (r = 0; r < len; r++)
		tmp *= argv[1][r];
	password[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	for (r = 0; r < len; r++)
	{
		if (argv[1][r] > tmp)
			tmp = argv[1][r];
	}
	srand(tmp ^ 14);
	password[3] = codex[rand() & 63];

	tmp = 0;
	for (r = 0; r < len; r++)
		tmp += (argv[1][r] * argv[1][r]);
	password[4] = codex[(tmp ^ 239) & 63];

	for (r = 0; r < argv[1][0]; r++)
		tmp = rand();
	password[5] = codex[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}

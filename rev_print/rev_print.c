#include <unistd.h>

int stringlength(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i = stringlength(argv[1]) - 1;
		while (i >= 0)
		{
			write (1, &argv[1][i--], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
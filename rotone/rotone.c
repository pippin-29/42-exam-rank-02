#include <unistd.h>
int isAlpha (char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int main (int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != 0)
		{
			if (isAlpha(argv[1][i]))
			{
				if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				{
					argv[1][i] -= 25;
					write (1, &argv[1][i], 1);
				}
				else
				{
					argv[1][i]++;
					write (1, &argv[1][i], 1);
				}	
			} else
			{
				write (1, &argv[1][i], 1);
			}
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
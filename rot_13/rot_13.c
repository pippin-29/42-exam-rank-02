#include <unistd.h>

void	printchar(char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				printchar(argv[1][i] + 13);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				printchar(argv[1][i] + 13);
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				printchar(argv[1][i] - 13);
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				printchar(argv[1][i] - 13);
			else
				printchar(argv[1][i]);
			i++;
		}
		write (1, "\n", 1);
	}
	else
	{
		write (1, "\n", 1);
	}
	
}
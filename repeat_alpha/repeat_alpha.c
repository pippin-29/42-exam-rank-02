#include <unistd.h>

void repeat_alpha(char a)
{
	char i = a;
	if (i >= 'a' && i <= 'z')
		i -= 96;
	if (i >= 'A' && i <= 'Z')
		i -= 64;
	while (i)
	{
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
			write (1, &a, 1);
		i--;
	}
}

int main (int argc, char **argv)
{

	int i = 0;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				repeat_alpha(argv[1][i]);
			else
				write (1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
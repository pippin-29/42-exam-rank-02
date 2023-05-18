#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void repeat_alpha_print(char *s)
{
	int i = 0;
	int d = 0;

	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			d = s[i];
			while (d - 64)
			{
				ft_putchar(s[i]);
				d--;
			}
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			d = s[i];
			while (d - 96)
			{
				ft_putchar(s[i]);
				d--;
			}
		}
		else
		{
			ft_putchar(s[i]);
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha_print(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
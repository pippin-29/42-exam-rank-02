#include <unistd.h>

void putchar (char c)
{
	write (1, &c, 1);
}

void printstrinG (char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i+1] == ' ' || s[i+1] == '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				putchar(s[i] - 32);
			else
				putchar(s[i]);
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				putchar(s[i] + 32);
			else
				putchar(s[i]);
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	int i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			printstrinG (argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}